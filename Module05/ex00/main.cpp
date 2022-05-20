/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:49:52 by agarzon-          #+#    #+#             */
/*   Updated: 2022/05/20 17:19:28 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "CREATING BUREAUCRAT GRADE 10" << std::endl;
	Bureaucrat s("Sarah", 10);

	std::cout << s;
	std::cout << "GRADE DOWN" << std::endl;
	s.gradeDown();
	std::cout << s;
	std::cout << "GRADE UP" << std::endl;
	s.gradeUp();
	std::cout << s;

	std::cout <<  std::endl;
	std::cout << "CREATING BUREAUCRAT GRADE 155" << std::endl;
	try {
		Bureaucrat j("John", 155);
		std::cout << j;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout <<  std::endl;
	std::cout << "CREATING BUREAUCRAT GRADE -3" << std::endl;
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
