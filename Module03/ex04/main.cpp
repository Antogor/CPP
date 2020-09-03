/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 12:54:06 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/03 10:50:50 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int main (void)
{
	FragTrap ft("Spike");
	ScavTrap st("Loren");
	NinjaTrap nt("Naruto");
	ClapTrap ct("Rick");

	std::cout << "------------------------\n" << std::endl;
	std::cout << "Super Test\n" << std::endl;
	SuperTrap sup("S4P3R");
	std::cout << sup.meleeAttack("Handsome Jack") << std::endl;
	std::cout << sup.rangedAttack("Fanatic") << std::endl;
	sup.vaulthunter_dot_exe("Bandit");
	sup.takeDamage(25);
	sup.beRepaired(40);
	sup.ninjaShoebox(ft);
	sup.ninjaShoebox(st);
	sup.ninjaShoebox(nt);
	sup.ninjaShoebox(ct);
	sup.vaulthunter_dot_exe("Skag");

	return 0;
}
