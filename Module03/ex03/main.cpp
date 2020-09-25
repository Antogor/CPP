/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 12:54:06 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/19 11:43:45 by agarzon-         ###   ########.fr       */
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
	std::string name5 = "Sasuke";
	FragTrap ft(name1);
	ScavTrap st(name2);
	NinjaTrap nt(name3);
	ClapTrap ct(name4);
	NinjaTrap sk(name5);

	st.takeDamage(nt.rangedAttack(name2));
	ft.takeDamage(nt.meleeAttack(name1));
	nt.ninjaShoebox(ft);
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(sk);
	nt.ninjaShoebox(ct);
	return 0;;
}
