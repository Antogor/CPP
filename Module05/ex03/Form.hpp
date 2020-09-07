/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 14:05:55 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/07 18:00:42 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <exception>
# include <ostream>
# include <string>
# include <iostream>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	private:
			Form();
			std::string const name;
			bool _sign;
			int const gradeToSign;
			int const gradeToExecute;
	public:
			Form(std::string const &name, int const gradeToSign, int const gradeToExecute);
			Form(Form const &other);
			virtual ~Form();

			class GradeTooHighException: public std::exception{
				public:
						virtual const char * what() const throw();
			};
			
			class GradeTooLowException: public std::exception{
				public:
						virtual const char * what() const throw();
			};

			class IsSignedException: public std::exception{
				public:
						virtual const char * what() const throw();
			};

			class UnsignedException: public std::exception{
				public:
						virtual const char * what() const throw();
			};

			Form &operator=(Form const &other);
			
			virtual void execute(Bureaucrat const &executor) const = 0;

			void beSigned(Bureaucrat const &b);

			std::string const &getName() const;
			bool getSign() const;
			int getGradeToSign() const;
			int getGradeToExecute() const;
};

	std::ostream &operator<<(std::ostream &out, Form const &other);

#endif
