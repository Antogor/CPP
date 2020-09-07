/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 20:35:46 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/07 16:27:04 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
			RobotomyRequestForm();
			std::string objective;
	public:
			RobotomyRequestForm(std::string const &objective);
			RobotomyRequestForm(RobotomyRequestForm const &other);
			virtual ~RobotomyRequestForm();
			
			RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

			void execute(Bureaucrat const &executor) const;
			static Form *generate(std::string const &target);

};

#endif
