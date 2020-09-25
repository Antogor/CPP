/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 17:29:18 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/20 11:16:19 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap:
		public FragTrap, public NinjaTrap 
{
	private:
			SuperTrap();
	public:
			SuperTrap(std::string const &name);
			~SuperTrap();
			SuperTrap(SuperTrap const &sup);
			SuperTrap &operator=(SuperTrap const &sup);
			int getHit();
			int getMaxHit();
			int getEnergy();
			int getMaxEnergy();
			int getMelee();
			int getRanged();
			int getArmor();
};

#endif
