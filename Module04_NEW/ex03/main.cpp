/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 17:31:43 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 18:13:21 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include <iostream>

int main(){
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob); //Ice
	me->use(1, *bob); //Cure
	me->use(2, *bob); //Empty
	me->unequip(1);
	me->use(1, *bob); //Empty
	me->use(0, *bob); //Cure
	me->use(-1, *bob); //Dont exists
	me->unequip(-1);
	std::cout << "XP: " << tmp->getXP() << std::endl;
	

	delete bob;
	delete me;
	delete src;
	
	std::cout << "---------------------\n" << std::endl;
	
	Ice ice;
	Character c("Spike");
	ice.use(c);
	std::cout << ice.getXP() << std::endl;

	Ice ice2(ice);
	std::cout << ice2.getXP() << std::endl;
	std::cout << ice2.getType() << std::endl;
	ice2.use(c);
	std::cout << ice2.getXP() << std::endl;
	std::cout << ice.getXP() << std::endl;

	ice2 = ice;
	std::cout << ice2.getXP() << std::endl;
	std::cout << ice.getXP() << std::endl;
	
	ice2.use(c);
	std::cout << ice2.getXP() << std::endl;
	std::cout << ice.getXP() << std::endl;

	return  0;
}
