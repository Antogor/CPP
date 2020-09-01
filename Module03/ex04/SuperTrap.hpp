/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 17:29:18 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 10:38:42 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
			SuperTrap(std::string const &name);
			~SuperTrap();
			SuperTrap(SuperTrap const &sup);
			SuperTrap &operator=(SuperTrap const &sup);
			int rangedAttack(std::string const &target);
			int meleeAttack(std::string const &target);
};

#endif
