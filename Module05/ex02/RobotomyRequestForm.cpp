/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 20:37:40 by agarzon-          #+#    #+#             */
/*   Updated: 2022/05/20 17:48:48 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &objective): 
	Form("RobotomyRequestForm", 72, 45), objective(objective)
{

}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
	Form(other), objective(other.objective)
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


