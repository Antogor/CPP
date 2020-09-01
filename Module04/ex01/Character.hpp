/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:38:16 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 16:16:52 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "Enemy.hpp"
# include "AWeapon.hpp"
#include <ostream>

class Character
{
	private:
			Character();
			std::string name;
			int ap;
			AWeapon *weapon;
	public:
			Character(std::string const & name);
			Character(Character const &c);
			~Character();

			Character &operator=(Character const &c);

			void recoverAP();
			void equip(AWeapon *weapon);
			void attack(Enemy *enemy);

			std::string const &getName() const;
			int getAp() const;
			AWeapon *getWeapon() const;
};

	std::ostream &operator<<(std::ostream &out, Character const &c);

#endif
