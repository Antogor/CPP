/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 20:52:59 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/07 18:12:36 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &objective): 
	Form("PresidentialPardonForm", 25, 5), objective(objective)
{

}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):
	Form(other), objective(other.objective)
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
	(void)other;
	
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	Form::execute(executor);
	std::cout << this->objective << " Zafod Beeblebrox" << std::endl;
}


