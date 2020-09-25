/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 17:41:18 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/25 15:37:50 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name): ClapTrap(name),
		 FragTrap(name), NinjaTrap(){
//	this->hit = FragTrap::ClapTrap::hit;
//	this->maxHit = FragTrap::maxHit;
//	this->energy = NinjaTrap::energy;
//	this->maxEnergy = NinjaTrap::maxEnergy;
//	this->melee = NinjaTrap::melee;
//	this->ranged = FragTrap::ranged;
//	this->armor = FragTrap::armor;
	this->type = "S4P3R-TP";
	std::cout << this->name << ": Hey everybody! Check out my SUPER package!\n" << std::endl;
}

SuperTrap::~SuperTrap(){
	std::cout << this->name << ": No, nononono NO! Crap!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &sup) : ClapTrap(sup), FragTrap(sup), NinjaTrap(sup){
	std::cout << this->name << ": Hey everybody! Check out my SUPER package!\n" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &sup){
	this->hit = sup.hit;
	this->maxHit = sup.maxHit;
	this->energy = sup.energy;
	this->maxEnergy = sup.maxEnergy;
	this->melee = sup.melee;
	this->ranged = sup.ranged;
	this->armor = sup.armor;
	this->name = sup.name;
	this->level = sup.level;
	this->type = sup.type;

	return *this;
}

int SuperTrap::getHit(){
	return this->hit;
}

int SuperTrap::getMaxHit(){
	return this->maxHit;
}

int SuperTrap::getEnergy(){
	return this->energy;
}

int SuperTrap::getMaxEnergy(){
	return this->maxEnergy;
}

int SuperTrap::getMelee(){
	return this->melee;
}

int SuperTrap::getRanged(){
	return this->ranged;
}

int SuperTrap::getArmor(){
	return this->armor;
}

