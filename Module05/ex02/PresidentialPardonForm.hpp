/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 20:51:32 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 20:52:48 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
			PresidentialPardonForm();
			std::string objective;
	public:
			PresidentialPardonForm(std::string const &objective);
			PresidentialPardonForm(PresidentialPardonForm const &other);
			virtual ~PresidentialPardonForm();
			
			PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

			void execute(Bureaucrat const &executor) const;

};

#endif
