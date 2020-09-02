/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 13:46:38 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 15:02:44 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	private:
			AMateria();
	protected:
			std::string type;
			unsigned int _xp;
	public:
			AMateria(std::string const & type);
			virtual ~AMateria();
			AMateria(AMateria const &other);

			AMateria &operator=(AMateria const &other);

			std::string const & getType() const; //Returns the materia type
			unsigned int getXP() const; //Returns the Materia's XP
			
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};

#endif
