/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:09:25 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 13:19:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap{

	private:
			ScavTrap();
			std::string challenges[5];
	public:
          	ScavTrap(std::string const &name);
          	~ScavTrap();
          	ScavTrap(const ScavTrap &s);
          	ScavTrap &operator=(const ScavTrap &s);
          	int rangedAttack(std::string const &target);
          	int meleeAttack(std::string const &target);
			void challengeNewcomer(void);
};


#endif
