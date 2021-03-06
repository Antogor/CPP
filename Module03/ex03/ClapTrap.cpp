/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 14:16:43 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/19 11:40:26 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : name(name){
	this->hit = 100;
	this->maxHit = 100;
	this->energy = 100;
	this->maxEnergy = 100;
	this->level = 1;
	this->melee = 20;
	this->ranged = 15;
	this->armor = 5;
	this->type = "CL4P-TP";
	std::cout << this->name << " ClapTrap activated\n" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << this->name << " ClapTrap destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c){
	this->name = c.name;
	this->hit = c.hit;
	this->maxHit = c.maxHit;
	this->energy = c.energy;
	this->maxEnergy = c.maxEnergy;
	this->level = c.level;
	this->melee = c.melee;
	this->ranged = c.ranged;
	this->armor = c.armor;
	this->type = c.type;
	std::cout << this->name << " ClapTrap activated\n" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c){
	this->name = c.name;
	this->hit = c.hit;
	this->maxHit = c.maxHit;
	this->energy = c.energy;
	this->maxEnergy = c.maxEnergy;
	this->level = c.level;
	this->melee = c.melee;
	this->ranged = c.ranged;
	this->armor = c.armor;
	this->type = c.type;

	return *this;
}

int ClapTrap::rangedAttack(const std::string &target){
	std::cout << this->type << " " << this->name << " attacks " << target
				<< " at range, causing " << this->ranged
				<< " points of damage!\n" << std::endl;
	return this->ranged;
}

int ClapTrap::meleeAttack(const std::string &target){
	std::cout <<  this->type << " " << this->name
				<< " attacks " << target
				<< " at melee, causing " << this->melee
				<< " points of damage!\n" << std::endl;
	return this->melee;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (amount > (unsigned int)this->armor)
		amount -= this->armor;
	else
		amount = 0;
	if (amount >= (unsigned int)this->maxHit)
		this->hit = 0;
	else{
		this->hit -= amount;
	if (this->hit < 0)
		this->hit = 0;
		std::cout << this->name << " receive "
					<< amount << " points of damage" << std::endl;
	}
	std::cout << "Diagnosis: " << this->hit << " remaining hit points\n" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (amount > (unsigned int)this->maxHit){
		std::cout << this->name << " recovers "
					<< amount << " hit points" << std::endl;
		this->hit = this->maxHit;
	}
	else{
		this->hit += amount;
		std::cout << this->name << " recovers "
					<< amount << " hit points" << std::endl;
		if (this->hit > this->maxHit)
			this->hit = this->maxHit;
	}
	std::cout << "Diagnosis: " << this->hit << " remaining hit points\n" << std::endl;
}

std::string ClapTrap::getName(){
	return this->name;
}
