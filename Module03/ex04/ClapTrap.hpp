/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:11:25 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/17 18:59:12 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
	protected:
			ClapTrap();
			unsigned int hit;
			unsigned int maxHit;
			unsigned int energy;
			unsigned int maxEnergy;
			int level;
			std::string name;
			int melee;
			int ranged;
			unsigned int armor;
			std::string type;
	public:
			ClapTrap(std::string const &name);
			virtual ~ClapTrap();
			ClapTrap(const ClapTrap &c);
			ClapTrap &operator=(const ClapTrap &c);
			unsigned int rangedAttack(std::string const &target);
			unsigned int meleeAttack(std::string const &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			virtual std::string getName();
};

#endif
