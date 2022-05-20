/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:49:52 by agarzon-          #+#    #+#             */
/*   Updated: 2022/05/20 17:31:53 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "CREATING BUREAUCRAT AND FORMS" << std::endl;
	Bureaucrat s("Sarah", 10);
	Form bored("Boring Register", 11, 2);
	Form moreBored("XJ34", 1, 2);

	std::cout << s;
	std::cout << bored;
	std::cout << moreBored;

	std::cout << "---------------------------\n" << std::endl;
	std::cout << std::endl << "SIGN FORM IN RANGE" << std::endl;
	s.signForm(bored);
	std::cout << bored;

	std::cout << "---------------------------\n" << std::endl;
	std::cout << std::endl << "SIGN FORM OUTSIDE RANGE" << std::endl;
	try{
		s.signForm(moreBored);
	} catch (Form::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::IsSignedException &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---------------------------\n" << std::endl;
	std::cout << std::endl << "SIGN FORM THAT IS SIGNED" << std::endl;
	try{
		s.signForm(bored);
	} catch (Form::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::IsSignedException &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---------------------------\n" << std::endl;

	std::cout << std::endl << "CREATING FORM WITH GRADE DOWN" << std::endl;
	try {
		Form l("DF65", 155, 43);
		std::cout << l;
	
	} catch (Form::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "CREATING FORM WITH GRADE UP" << std::endl;
	try {
		Form b("Bruce", -3, 0);
		std::cout << b;
	} catch (Form::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
