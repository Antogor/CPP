/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:49:52 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 17:37:31 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat s("Sarah", 10);

	std::cout << s;
	s.gradeDown();
	std::cout << s;
	s.gradeUp();
	std::cout << s;

	try {
		Bureaucrat j("John", 155);
		std::cout << j;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat b("Bruce", -3);
		std::cout << b;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
