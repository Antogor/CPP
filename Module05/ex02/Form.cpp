/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 17:53:07 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 20:00:32 by agarzon-         ###   ########.fr       */
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
	return "ForException: Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw(){
	return "ForException: Grade Too Low";
}

const char *Form::IsSignedException::what() const throw(){
	return "IsSignedException: Form is already signed";
}

const char*Form::UnsignedException::what() const throw(){
	return "Unsigned Exception: Unsigned Form";
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

void Form::execute(const Bureaucrat &executor) const{
	if (!this->getSign())
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
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


