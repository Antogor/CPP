/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:49:52 by agarzon-          #+#    #+#             */
/*   Updated: 2022/05/20 18:04:35 by agarzon-         ###   ########.fr       */
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
	std::cout << "CREATING BUREAUCRAT AND INTERN" << std::endl;
	Bureaucrat s("Sarah", 100);
	Bureaucrat boss("Supervisor", 1);
	Intern inter;
	std::cout << s;
	std::cout << boss << std::endl;

	std::cout << "------------------------------\n" << std::endl;
	
	std::cout << "MAKING FORMS" << std::endl;
	try{
		Form *bored = inter.makeForm("shrubbery creation", "office");
		Form *moreBored = inter.makeForm("robotomy request", "Marvin");
		Form *moreMoreBored = inter.makeForm("presidential pardon", "You");
		try {
			std::cout << "SIGN AND EXECUTE FORMS" << std::endl;
			s.signForm(*bored);
			boss.signForm(*moreMoreBored);
			s.executForm(*bored);
			boss.executForm(*moreMoreBored);
			boss.signForm(*moreBored);
			boss.executForm(*moreBored);
			
			std::cout << "------------------------------\n" << std::endl;
	
			std::cout << "EXECUTE FORMS TOO HIGH" << std::endl;
			s.executForm(*moreMoreBored);
//			std::cout << "EXECUTE FORMS NOT SIGNED" << std::endl;
//			boss.executForm(*moreBored);

		}catch (Form::GradeTooHighException &e){
			std::cerr << e.what() << std::endl;
		} catch (Form::GradeTooLowException &e){
			std::cerr << e.what() << std::endl;
		} catch (Form::IsSignedException &e){
			std::cerr << e.what() << std::endl;
		} catch (Form::UnsignedException &e){
			std::cerr << e.what() << std::endl;
		}
		delete(bored);
		delete(moreBored);
		delete(moreMoreBored);
	} catch (Intern::UnrecognizedFormException &e) {
		std::cerr << e.what() << std::endl;
	}


	std::cout << "------------------------------\n" << std::endl;	
	std::cout << "MAKING AN INVENTED FORM" << std::endl;
	try {
		Form *moreMoreMoreBored = inter.makeForm("invented", "None");
		s.signForm(*moreMoreMoreBored);
	} catch (Intern::UnrecognizedFormException &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
