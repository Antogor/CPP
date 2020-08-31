/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 12:54:06 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/31 13:59:38 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	std::string name1 = "Sipke";
	std::string name2 = "Loren";
	FragTrap ft(name1);
	ScavTrap st(name2);

	st.takeDamage(ft.rangedAttack(name2));
	ft.takeDamage(st.meleeAttack(name1));
	ft.beRepaired(10);
	st.beRepaired(20);
	st.challengeNewcomer();
	st.takeDamage(ft.vaulthunter_dot_exe(name2));
	st.challengeNewcomer();
	st.takeDamage(ft.vaulthunter_dot_exe(name2));
	st.challengeNewcomer();
	st.takeDamage(ft.vaulthunter_dot_exe(name2));
	
	return 0;;
}
