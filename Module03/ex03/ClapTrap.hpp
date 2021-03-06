/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:11:25 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/17 17:09:18 by agarzon-         ###   ########.fr       */
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
			int hit;
			int maxHit;
			int energy;
			int maxEnergy;
			int level;
			std::string name;
			int melee;
			int ranged;
			int armor;
			std::string type;
	public:
			ClapTrap(std::string const &name);
			virtual ~ClapTrap();
			ClapTrap(const ClapTrap &c);
			ClapTrap &operator=(const ClapTrap &c);
			int rangedAttack(std::string const &target);
			int meleeAttack(std::string const &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			virtual std::string getName();
};

#endif
