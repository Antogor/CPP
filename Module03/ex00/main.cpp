/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 12:54:06 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/31 13:05:30 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void)
{
	FragTrap ft("Spike");

	ft.rangedAttack("Handsome Jack");
	ft.vaulthunter_dot_exe("Biker");
	ft.meleeAttack("Bandit");
	ft.takeDamage(20);
	ft.beRepaired(10);
	ft.vaulthunter_dot_exe("Adult Skag");
	ft.takeDamage(200);
	ft.beRepaired(500);
	ft.vaulthunter_dot_exe("Fanatic");
	ft.takeDamage(2);
	ft.beRepaired(0);
	ft.vaulthunter_dot_exe("Noggin");
	ft.vaulthunter_dot_exe("Aurelia");
	
	return 0;;
}
