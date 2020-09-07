/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 10:08:41 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/07 18:53:26 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "--------------------------\n" << std::endl;

	ISquad *squad = new Squad;
	std::cout << squad->push(new TacticalMarine) << " Marine added" << std::endl;
	std::cout << squad->push(new TacticalMarine) << " Marine added" << std::endl;
	for (int i = 0; i < squad->getCount(); ++i)
	{
		ISpaceMarine* marine = squad->getUnit(i);
		marine->battleCry();
		marine->rangedAttack();
		marine->meleeAttack();
	}
	std::cout << squad->getCount() << " Marines remaining" << std::endl;
	
	std::cout << "--------------------------\n" << std::endl;
	
	ISpaceMarine* InquisitorMartin = new TacticalMarine;
	ISpaceMarine* GreyFox = new AssaultTerminator;

	squad->push(InquisitorMartin);
	squad->push(GreyFox);
	squad->push(InquisitorMartin);
	for (int i = 0; i < squad->getCount(); ++i)
	{
		ISpaceMarine* marine = squad->getUnit(i);
		marine->battleCry();
		marine->rangedAttack();
		marine->meleeAttack();
	}
	std::cout << squad->getCount() << " Marines remaining" << std::endl;
	
	std::cout << "--------------------------\n" << std::endl;
	
	ISquad *squadCopy = new Squad;
	squadCopy->push(new AssaultTerminator);
	squadCopy->push(new AssaultTerminator);
	for (int i = 0; i < squadCopy->getCount(); ++i)
	{
		ISpaceMarine* marine = squadCopy->getUnit(i);
		marine->battleCry();
		marine->rangedAttack();
		marine->meleeAttack();
	}
	std::cout << squadCopy->getCount() << " Marines remaining" << std::endl;
	squadCopy = squad;
	std::cout << squadCopy->getCount() << " Marines remaining" << std::endl;
	for (int i = 0; i < squadCopy->getCount(); ++i)
	{
		ISpaceMarine* marine = squadCopy->getUnit(i);
		marine->battleCry();
		marine->rangedAttack();
		marine->meleeAttack();
	}
	std::cout << "--------------------------\n" << std::endl;
	
	std::cout << squad->getCount() << " -> " << squad->push(nullptr) << std::endl;
	std::cout << squad->getCount() << " -> " << squad->push(squad->getUnit(3)) << std::endl;
	std::cout << squad->getUnit(-1) << " " << squad->getUnit(10000) << std::endl;
	delete squad;
	delete squadCopy;
	return 0;
}
