/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:59:49 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/31 17:20:54 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name)
		: ClapTrap(name){
	this->melee = 30;
	this->ranged = 20;
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

FragTrap::FragTrap(const FragTrap &f) : ClapTrap(f.name){
	*this = f;
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

	return *this;
}

int FragTrap::rangedAttack(const std::string &target){
	std::cout << this->name << ": Hyah!" << std::endl; 
	std::cout << "FR4G-TP " << name
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
