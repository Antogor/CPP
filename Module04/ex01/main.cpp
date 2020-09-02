/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 16:25:34 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 18:43:15 by agarzon-         ###   ########.fr       */
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
	std::cout << "SP1 HP remaining " << sp1->getHP() << std::endl;
	std::cout << *me;
	std::cout << "---------------------------------------\n" << std::endl;

	SuperMutant sp2;
	std::cout << "SP2 HP remaining " << sp2.getHP() << std::endl;
	sp2.takeDamage(50);
	std::cout << "SP2 HP remaining " << sp2.getHP() << std::endl;
	SuperMutant sp3(sp2);
	std::cout << "SP3 HP remaining " << sp3.getHP() << std::endl;
	sp2.takeDamage(50);
	std::cout << "SP2 HP remaining " << sp2.getHP() << std::endl;
	std::cout << "SP3 HP remaining " << sp3.getHP() << std::endl;
	sp3.takeDamage(50);
	std::cout << "SP2 HP remaining " << sp2.getHP() << std::endl;
	std::cout << "SP3 HP remaining " << sp3.getHP() << std::endl;

	std::cout << "---------------------------------------\n" << std::endl;
	me->attack(sp1);
	std::cout << "SP1 HP remaining " << sp1->getHP() << std::endl;
	std::cout << *me;
	me->attack(sp1);
	std::cout << "SP1 HP remaining " << sp1->getHP() << std::endl;
	std::cout << *me;

	std::cout << "---------------------------------------\n" << std::endl;
	delete me;
	delete sp1;
	delete pr;
	delete pf;

	return 0;
}
