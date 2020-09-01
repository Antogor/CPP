/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:11:25 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 10:43:31 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
	protected:
			int hit;
			int maxHit;
			int energy;
			int maxEnergy;
			int level;
			std::string name;
			int melee;
			int ranged;
			int armor;
	public:
			ClapTrap(std::string const &name);
			virtual ~ClapTrap();
			ClapTrap(const ClapTrap &c);
			ClapTrap &operator=(const ClapTrap &c);
			virtual int rangedAttack(std::string const &target);
			virtual int meleeAttack(std::string const &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			virtual std::string getName();
};

#endif
