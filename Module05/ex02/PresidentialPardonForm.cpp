/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 20:52:59 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 20:56:22 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &objective): 
	objective(objective), Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):
	objective(other.objective), Form(other)
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
	(void)other;
	
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	Form::execute(executor);
	std::cout << this->objective << "has been forgiven by the Awesome and great and super" 
				<< " president and major Zafod Beeblebox" << std::endl;
}


