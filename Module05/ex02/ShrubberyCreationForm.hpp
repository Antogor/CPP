/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 17:52:22 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 20:20:28 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <string>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
			ShrubberyCreationForm();
			std::string objective;
			std::string  trees[5];
	public:
			ShrubberyCreationForm(std::string const &objective);
			ShrubberyCreationForm(ShrubberyCreationForm const &other);
			virtual ~ShrubberyCreationForm();
			
			ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

			void execute(Bureaucrat const &executor) const;

};

#endif
