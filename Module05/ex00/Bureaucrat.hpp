/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 13:24:48 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 13:55:14 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <exception>
# include <ostream>
# include <string>
# include <iostream>

class Bureaucrat
{
	private:
			Bureaucrat();
			std::string const name;
			int grade;
	public:
			Bureaucrat(std::string const &name, int grade);
			Bureaucrat(Bureaucrat const &other);
			virtual ~Bureaucrat();
			
			Bureaucrat &operator=(Bureaucrat const &other);

			class GradeTooHighException: public std::exception{
				public:
					virtual const char * what() const throw();
			};

			class GradeTooLowException: public std::exception{
				public:	
					virtual const char * what() const throw();
			};

			std::string const &getName() const;
			int getGrade() const;
			void gradeUp();
			void gradeDown();
};

	std::ostream &operator<<(std::ostream &out, Bureaucrat const &other);

#endif
