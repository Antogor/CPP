/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:09:25 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/31 13:41:29 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>

class ScavTrap{

	private:
			int hit;
        	int maxHit;
          	int energy;
          	int maxEnergy;
          	int level;
          	std::string name;
          	int melee;
          	int ranged;
          	int armor;
			std::string challenges[5];
	public:
          	ScavTrap(std::string name);
          	~ScavTrap();
          	ScavTrap(const ScavTrap &f);
          	ScavTrap &operator=(const ScavTrap &f);
          	int rangedAttack(std::string const &target);
          	int meleeAttack(std::string const &target);
          	void takeDamage(unsigned int amount);
          	void beRepaired(unsigned int amount);
			void challengeNewcomer(void);
};


#endif
