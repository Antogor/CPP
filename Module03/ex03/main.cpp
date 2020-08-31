/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 12:54:06 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/31 17:12:22 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main (void)
{
	std::string name1 = "Sipke";
	std::string name2 = "Loren";
	std::string name3 = "Naruto";
	std::string name4 = "Rick";
	FragTrap ft(name1);
	ScavTrap st(name2);
	NinjaTrap nt(name3);
	ClapTrap ct(name4);

	st.takeDamage(nt.rangedAttack(name2));
	ft.takeDamage(nt.meleeAttack(name1));
	nt.ninjaShoebox(ft);
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(nt);
	nt.ninjaShoebox(ct);
	return 0;;
}
