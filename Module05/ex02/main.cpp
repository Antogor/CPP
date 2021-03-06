/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:49:52 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/07 18:48:53 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat s("Sarah", 100);
	Bureaucrat boss("Supervisor", 1);
	Form *bored = new ShrubberyCreationForm("Office");
	Form *moreBored = new RobotomyRequestForm("Marvin");
	Form *moreMoreBored = new PresidentialPardonForm("You");


	s.signForm(*bored);
	boss.signForm(*moreMoreBored);

	std::cout << "------------------------------\n" << std::endl;

	s.executForm(*bored);
	boss.executForm(*moreMoreBored);
	std::cout << "------------------------------\n" << std::endl;

	try{
		s.executForm(*moreMoreBored);
	} catch (Form::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::IsSignedException &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------\n" << std::endl;

	try{
		boss.executForm(*moreBored);
	} catch (Form::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::IsSignedException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::UnsignedException &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------\n" << std::endl;

	try{
		moreBored->beSigned(boss);
		moreBored->execute(boss);
	} catch (Form::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::IsSignedException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::UnsignedException &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "------------------------------\n" << std::endl;

	try{
		boss.executForm(*moreBored);
	} catch (Form::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::IsSignedException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::UnsignedException &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------------------------------\n" << std::endl;

	delete bored;
	delete moreBored;
	delete moreMoreBored;
	return 0;
}
