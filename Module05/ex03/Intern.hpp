/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:25:26 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/07 17:31:21 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include <exception>
# include <string>
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
			Form *(*func[3])(std::string const &);
			std::string names[3];
	public:
			Intern();
			Intern(Intern const &other);
			virtual ~Intern();
			
			Intern &operator=(Intern const &other);

			class UnrecognizedFormException : public std::exception{
				public:
						virtual const char * what() const throw();
			};

			Form *makeForm(std::string const &nameForm, std::string const &target) const;
};

#endif
