/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:25:35 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/07 18:46:03 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
	this->func[0] = ShrubberyCreationForm::generate;
	this->func[1] = RobotomyRequestForm::generate;	
	this->func[2] = PresidentialPardonForm::generate;	
	this->names[0] = "shrubbery creation";
	this->names[1] = "robotomy request";
	this->names[2] = "presidential pardon";
}

Intern::~Intern(){

}

Intern::Intern(Intern const &other){
	(void)other;
}

Intern &Intern::operator=(Intern const &other){
	(void)other;
	return *this;
}

const char * Intern::UnrecognizedFormException::what() const throw(){
	return "UnrecognizedFormException: This Form doesn't exists";
}

Form *Intern::makeForm(const std::string &nameForm, const std::string &target) const{
	Form *form = NULL;
	for (int i = 0; i < 3; i++){
		if (nameForm == this->names[i]){
			form = this->func[i](target);
			std::cout << "Intern creates " << *form;
		}
	}
	if (!form)
		throw Intern::UnrecognizedFormException();
	return form;
	
}

