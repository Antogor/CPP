/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:47:33 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 11:03:50 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:
			FragTrap();
			std::string attacks[5];
	public:
			FragTrap(std::string const &name);
			~FragTrap();
			FragTrap(const FragTrap &f);
			FragTrap &operator=(const FragTrap &f);
			int rangedAttack(std::string const &target);
			int meleeAttack(std::string const &target);
			int vaulthunter_dot_exe(std::string const &target);
};

#endif
