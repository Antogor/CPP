/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 11:54:09 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 13:19:11 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <ostream>
# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
			Sorcerer();
			std::string name;
			std::string title;
	public:
			Sorcerer(std::string const &name, std::string const &title);
			~Sorcerer();
			Sorcerer(Sorcerer const &s);
			Sorcerer &operator=(Sorcerer const &s);
			std::string const &getName() const;
			std::string const &getTitle() const;
			void polymorph(Victim const &v) const;
};

	std::ostream &operator<<(std::ostream &out, Sorcerer const &s);

#endif
