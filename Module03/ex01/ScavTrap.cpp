/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:16:29 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 19:33:08 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : name(name){
	this->hit = 100;
	this->maxHit = 100;
	this->energy = 50;
	this->maxEnergy = 50;
	this->level = 1;
	this->melee = 20;
	this->ranged = 15;
	this->armor = 3;
	this->challenges[0] = "I will prove to you my robotic superiority!";
	this->challenges[1] = "Dance battle! Or, you know...regular battle";
	this->challenges[2] = "Man versus machine! Very tiny streamlined machine!";
	this->challenges[3] = "You versus me! Me versus you! Either way!";
	this->challenges[4] = "Care to have a friendly duel?";
	std::cout << this->name << ": Let's get this party started\n" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << this->name << ": Robot down!!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s){
	this->name = s.name;
	this->hit = s.hit;
	this->maxHit = s.maxHit;
	this->energy = s.energy;
	this->maxEnergy = s.maxEnergy;
	this->level = s.level;
	this->melee = s.melee;
	this->ranged = s.ranged;
	this->armor = s.armor;
	this->challenges[0] = s.challenges[0];
	this->challenges[1] = s.challenges[1];
	this->challenges[2] = s.challenges[2];
	this->challenges[3] = s.challenges[3];
	this->challenges[4] = s.challenges[4];
	std::cout << this->name << ": Let's get this party started\n" << std::endl;

}

ScavTrap &ScavTrap::operator=(const ScavTrap &s){
	this->name = s.name;
	this->hit = s.hit;
	this->maxHit = s.maxHit;
	this->energy = s.energy;
	this->maxEnergy = s.maxEnergy;
	this->level = s.level;
	this->melee = s.melee;
	this->ranged = s.ranged;
	this->armor = s.armor;
	this->challenges[0] = s.challenges[0];
	this->challenges[1] = s.challenges[1];
	this->challenges[2] = s.challenges[2];
	this->challenges[3] = s.challenges[3];
	this->challenges[4] = s.challenges[4];
	
	return *this;
}

int ScavTrap::rangedAttack(const std::string &target){
	std::cout << this->name << ": Pull pin, throw!" << std::endl;
	std::cout << "SC4V-TP " << name
	            << " attacks " << target
	            << " at range, causing " << this->ranged
	            << " points of damage!\n" << std::endl;
	return this->ranged;
}

int ScavTrap::meleeAttack(const std::string &target){
	std::cout << this->name << ": Pop pop" << std::endl;
	std::cout << "SC4V-TP " << this->name
	            << " attacks " << target
	            << " at melee, causing " << this->melee
	            << " points of damage!\n" << std::endl;
	return this->melee;
}

void ScavTrap::takeDamage(unsigned int amount){
	if (amount > this->armor){
	    amount -= this->armor;
	    std::cout << this->name << ": Ahg! My assets" << std::endl;
	}
	else{
	    amount = 0;
	    std::cout << this->name << ": Hahahahaha I'm alive!" << std::endl;
	}
	if (amount >= this->maxHit){
	    this->hit = 0;
	    std::cout << this->name << ": Extra ouch!" << std::endl;
	}
	else{
	    this->hit -= amount;
	    if (this->hit < 0)
	        this->hit = 0;
	    std::cout << "SC4V-TP " << this->name << " receive "
	                << amount << " points of damage" << std::endl;
	}
	std::cout << "Diagnosis: " << this->hit << " remaining hit points\n" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
	if (amount > this->maxHit){
	    std::cout << this->name << ": I'm too pretty to die!" << std::endl;
	    std::cout << "SC4V-TP " << this->name << " recovers "
	                << amount << " hit points" << std::endl;
	    this->hit = this->maxHit;
	}
	else{
	    this->hit += amount;
	    std::cout << "SC4V-TP " << this->name << " recovers "
	                << amount << " hit points" << std::endl;
	    if (this->hit > this->maxHit)
	        this->hit = this->maxHit;
	}
	std::cout << "Diagnosis: " << this->hit << " remaining hit points\n" << std::endl;
}

void ScavTrap::challengeNewcomer(){
	std::cout << this->name << ": " << this->challenges[std::rand() % 5] << std::endl;
}
