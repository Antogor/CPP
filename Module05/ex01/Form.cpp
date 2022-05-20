/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 17:53:35 by agarzon-          #+#    #+#             */
/*   Updated: 2022/05/20 17:32:01 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name, int const gradeToSign, int const gradeToExecute):
		name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
		this->_sign = false;
		if (this->getGradeToSign() > 150 || this->gradeToExecute > 150)
			throw Form::GradeTooLowException();
		else if (this->gradeToSign < 1 || this->gradeToExecute < 1)
			throw Form::GradeTooHighException();
}

Form::~Form(){

}

Form::Form(Form const &other):
	name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
		this->_sign = false;
		if (this->getGradeToSign() > 150 || this->gradeToExecute > 150)
			throw Form::GradeTooLowException();
		else if (this->gradeToSign < 1 || this->gradeToExecute < 1)
			throw Form::GradeTooHighException();

}

Form &Form::operator=(Form const &other){
	this->_sign = other.getSign();

	return *this;
}

const char *Form::GradeTooHighException::what() const throw(){
	return "FormException: Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw(){
	return "FormException: Grade Too Low";
}

const char *Form::IsSignedException::what() const throw(){
	return "This form is already signed";
}

void Form::beSigned(Bureaucrat const &b){
	if (b.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	else if (this->_sign)
		throw Form::IsSignedException();
	this->_sign = true;
}

std::string const &Form::getName() const{
	return this->name;
}

bool Form::getSign() const{
	return this->_sign;
}

int Form::getGradeToSign() const{
	return this->gradeToSign;
}

int Form::getGradeToExecute() const{
	return this->gradeToExecute;
}

std::ostream &operator<<(std::ostream &out, Form const &other){
	if (other.getSign())
		out << "The form " << other.getName() << " grade: " << other.getGradeToSign()
			<< " and grade to execute: " << other.getGradeToExecute()
			<< " is signed" << std::endl;
	else
		out << "The form " << other.getName() << " grade: " << other.getGradeToSign()
			<< " and grade to execute: " << other.getGradeToExecute()
			<< " is NOT signed" << std::endl;
	return out;
}


