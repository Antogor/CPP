/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 19:20:58 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/17 19:27:48 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanB{
	private:
			const Weapon *weapon;
			std::string name;
	public:
			HumanB(std::string name);
			~HumanB();
			void setWeapon(Weapon &weapon);
			void attack() const;

};

#endif
