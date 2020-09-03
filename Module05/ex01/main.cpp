/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:49:52 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 17:35:42 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat s("Sarah", 10);
	Form bored("Boring Register", 11, 2);
	Form moreBored("XJ34", 1, 2);

	std::cout << s;
	s.gradeDown();
	std::cout << s;
	s.gradeUp();
	std::cout << s;

	s.signForm(bored);

	try{
		s.signForm(moreBored);
	} catch (Form::GradeTooHighException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	} catch (Form::IsSignedException &e){
		std::cerr << e.what() << std::endl;
	}

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

	try {
		Form l("DF65", 155, 43);
		std::cout << l;
	
	} catch (Form::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}

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
