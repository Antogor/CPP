/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:31:09 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 17:36:28 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat::Bureaucrat(Bureaucrat const &other): name(other.getName()){
	this->grade = other.getGrade();
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other){
	this->grade = other.getGrade();

	return *this;
}

std::string const &Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

void Bureaucrat::gradeUp(){
	this->grade--;
}

void Bureaucrat::gradeDown(){
	this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return "BureaucratException: Too high grade for this Bureaucrat";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "BureaucratException: Too low grade fot this Bureaucrat";
}

void Bureaucrat::signForm(Form &f) const{
	if (this->grade < f.getGradeToSign() && !f.getSign()){
		std::cout << this->name << " signs " << f.getName() << std::endl;
	}
	else if (f.getSign())
		std::cout << this->name << " can't sign " << f.getName()
					<< " because this form are signed" << std::endl;
	else
		std::cout << this->name << " can't sign " << f.getName()
					<< " because this form is grade " << f.getGradeToSign()
					<< std::endl;
	f.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &other){
	out << other.getName() << ", bureaucrat grade " 
			<< other.getGrade() << std::endl;
	return out;
}


