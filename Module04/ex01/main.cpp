/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 16:25:34 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 17:08:06 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include <iostream>

int main(){

	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "---------------------------------------\n" << std::endl;

	Enemy *sp1 = new SuperMutant();

	std::cout << *me;

	me->attack(sp1);
	std::cout << "Total Damage " << me->getWeapon()->getDamage() << std::endl;
	std::cout << *me;
	me->equip(pf);
	std::cout << "Total Damage " << me->getWeapon()->getDamage() << std::endl;
	std::cout << *me;
	me->attack(sp1);
	std::cout << "HP remaining " << sp1->getHP() << std::endl;
	std::cout << *me;

	Enemy *sp2 = new SuperMutant();
	sp2 = sp1;

	std::cout << "HP remaining " << sp2->getHP() << std::endl;
	me->equip(pr);
	std::cout << *me;

	me->attack(sp2);
	std::cout << "HP remaining " << sp2->getHP() << std::endl;
	std::cout << *me;

	me->attack(sp1);
	std::cout << "HP remaining " << sp1->getHP() << std::endl;
	std::cout << *me;
	return 0;
}
