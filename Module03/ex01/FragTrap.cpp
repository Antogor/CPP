/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:59:49 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/18 17:53:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : name(name){
	this->hit = 100;
	this->maxHit = 100;
	this->energy = 100;
	this->maxEnergy = 100;
	this->level = 1;
	this->melee = 30;
	this->ranged = 20;
	this->armor = 5;
	this->attacks[0] = "Can't touch me";
	this->attacks[1] = "Granaaaaade";
	this->attacks[2] = "Freeze peezy";
	this->attacks[3] = "Mortal combat activate";
	this->attacks[4] = "I'm cloaking";
	std::cout << this->name << ": Booting sequence complete. Hello! I am your new steward bot\n" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << this->name << ": Don't forget me!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f){
	this->name = f.name;
	this->hit = f.hit;
	this->maxHit = f.maxHit;
	this->energy = f.energy;
	this->maxEnergy = f.maxEnergy;
	this->level = f.level;
	this->melee = f.melee;
	this->ranged = f.ranged;
	this->armor = f.armor;
	this->attacks[0] = f.attacks[0];
	this->attacks[1] = f.attacks[1];
	this->attacks[2] = f.attacks[2];
	this->attacks[3] = f.attacks[3];
	this->attacks[4] = f.attacks[4];
	std::cout << this->name << ": Booting sequence complete. Hello! I am your new steward bot\n" << std::endl;

}

FragTrap &FragTrap::operator=(const FragTrap &f){
	this->name = f.name;
	this->hit = f.hit;
	this->maxHit = f.maxHit;
	this->energy = f.energy;
	this->maxEnergy = f.maxEnergy;
	this->level = f.level;
	this->melee = f.melee;
	this->ranged = f.ranged;
	this->armor = f.armor;
	this->attacks[0] = f.attacks[0];
	this->attacks[1] = f.attacks[1];
	this->attacks[2] = f.attacks[2];
	this->attacks[3] = f.attacks[3];
	this->attacks[4] = f.attacks[4];

	return *this;
}

int FragTrap::rangedAttack(const std::string &target){
	std::cout << this->name << ": Hyah!" << std::endl; 
	std::cout << "FR4G-TP " << this->name
				<< " attacks " << target
				<< " at range, causing " << this->ranged
				<< " points of damage!\n" << std::endl;	
	return this->ranged;
}

int FragTrap::meleeAttack(const std::string &target){
	std::cout << this->name << ": Take that!" << std::endl; 
	std::cout << "FR4G-TP " << this->name
				<< " attacks " << target
				<< " at melee, causing " << this->melee
				<< " points of damage!\n" << std::endl;
	return this->melee;
}

void FragTrap::takeDamage(unsigned int amount){
	if (amount > (unsigned int)this->armor){
		amount -= this->armor;
		std::cout << this->name << ": My robotic flesh! AAHH!" << std::endl;
	}
	else{
		amount = 0;
		std::cout << this->name << ": Holy armour!" << std::endl;
	}
	if (amount >= (unsigned int)this->maxHit){
		this->hit = 0;
		std::cout << this->name << ": Ouch! critical...hit" << std::endl;
	}
	else{
		this->hit -= amount;
		if (this->hit < 0)
			this->hit = 0;
		std::cout << "FR4G-TP " << this->name << " receive "
					<< amount << " points of damage" << std::endl;
	}
	std::cout << "Diagnosis: " << this->hit << " remaining hit points\n" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
	if (amount > (unsigned int)this->maxHit){
		std::cout << this->name << ": Sweet life juice" << std::endl;
		std::cout << "FR4G-TP " << this->name << " recovers "
					<< amount << " hit points" << std::endl;
		this->hit = this->maxHit;
	}
	else{
		this->hit += amount;
		std::cout << "FR4G-TP " << this->name << " recovers "
					<< amount << " hit points" << std::endl;
		if (this->hit > this->maxHit)
			this->hit = this->maxHit;
	}
	std::cout << "Diagnosis: " << this->hit << " remaining hit points\n" << std::endl;
}

int FragTrap::vaulthunter_dot_exe(const std::string &target){
	int finalDamage;

	if (this->energy < 25){
		std::cout << this->name << ": I'm out of energy" << std::endl;
		finalDamage = 0;
	}
	else{
		finalDamage = std::rand() % this->melee;
		this->energy -= 25;
		if (this->energy < 0)
			this->energy = 0;
		std::cout << this->name << ": " << this->attacks[std::rand() % 5] << std::endl;
		std::cout << "FR4G-TP " << this->name
					<< " attacks " << target
					<< " causing " << finalDamage
					<< " points of damage!" << std::endl;
	}
	std::cout << "Diagnosis: " << this->energy << " remaining energy points\n" << std::endl;	
	return finalDamage;
}
