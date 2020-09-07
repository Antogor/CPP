/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 20:37:40 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/04 16:56:32 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &objective): 
	objective(objective), Form("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
	objective(other.objective), Form(other)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
	(void)other;
	
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	Form::execute(executor);
	std::cout << "Brurruruuruur Fiiiiiiuuuuu Crck Cckc" << std::endl;
	if (std::rand() % 100 > 50)
		std::cout << this->objective << " has been Robotomized" << std::endl;
	else
		std::cout << "The Robotomy has failed, sorry " << this->objective << std::endl;
}

Form *RobotomyRequestForm::generate(const std::string &target){
	return new RobotomyRequestForm(target);
}
