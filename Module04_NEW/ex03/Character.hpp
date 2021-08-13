/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 15:22:39 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 16:39:40 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
			Character();
			AMateria *inventory[4];
			std::string name;
			int count;
	public:
			Character(std::string const &name);
			Character(Character const &other);
			virtual ~Character();
			
			Character &operator=(Character const &other);

			std::string const & getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
};

#endif
