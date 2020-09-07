/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:49:52 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/07 18:41:31 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <exception>

int main()
{
	Bureaucrat s("Sarah", 100);
	Bureaucrat boss("Supervisor", 1);
	Intern inter;
	try {
	
		Form *bored = inter.makeForm("shrubbery creation", "office");
		Form *moreBored = inter.makeForm("robotomy request", "Marvin");
		Form *moreMoreBored = inter.makeForm("presidential pardon", "You");

		s.signForm(*bored);
		boss.signForm(*moreMoreBored);
		s.executForm(*bored);
		boss.executForm(*moreMoreBored);
		
		std::cout << "------------------------------\n" << std::endl;
		
//		s.executForm(*moreMoreBored);
//		
//		std::cout << "------------------------------\n" << std::endl;
//		
//		boss.executForm(*moreBored);
//		
//		std::cout << "------------------------------\n" << std::endl;
//		
//		moreBored->beSigned(boss);
//		moreBored->execute(boss);
//		
//		std::cout << "------------------------------\n" << std::endl;
//		
//		boss.executForm(*moreBored);

		delete(bored);
		delete(moreBored);
		delete(moreMoreBored); 
	} catch (Intern::UnrecognizedFormException &e) {
		std::cerr << e.what() << std::endl;
	}catch (Form::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::IsSignedException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::UnsignedException &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
