/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:47:33 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 13:20:18 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>

class FragTrap
{
	private:
			FragTrap();
			int hit;
			int maxHit;
			int energy;
			int maxEnergy;
			int level;
			std::string name;
			int melee;
			int ranged;
			int armor;
			std::string attacks[5];
	public:
			FragTrap(std::string const &name);
			~FragTrap();
			FragTrap(const FragTrap &f);
			FragTrap &operator=(const FragTrap &f);
			int rangedAttack(std::string const &target);
			int meleeAttack(std::string const &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			int vaulthunter_dot_exe(std::string const &target);
};

#endif
