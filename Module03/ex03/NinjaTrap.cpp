/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:21:42 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/17 17:14:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name){
	this->hit = 60;
	this->maxHit = 60;
	this->energy = 120;
	this->maxEnergy = 120;
	this->melee = 60;
	this->ranged = 5;
	this->armor = 0;
	this->type = "NINJ4-TP";
	std::cout << "Here comes the ninja\n" << std::endl;
}

NinjaTrap::~NinjaTrap(){
	std::cout << "The ninja has to disappeared" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &n) : ClapTrap(n){
	std::cout << "Here comes the ninja\n" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &n){
	this->hit = n.hit;
	this->maxHit = n.maxHit;
	this->energy = n.energy;
	this->maxEnergy = n.maxEnergy;
	this->melee = n.melee;
	this->ranged = n.ranged;
	this->armor = n.armor;
	this->level = n.level;
	this->name = n.name;
	this->type = n.type;
	
	return *this;
}

void NinjaTrap::ninjaShoebox(ClapTrap &c){
	if (this->energy < 55)
		std::cout << this->name << ": I'm out of energy" << std::endl;
	else{
		this->energy -= 55;
		if (this->energy < 0)
			this->energy = 0;
		std::cout << this->type << " " << this->name << " destroy " << c.getName()
					<< " with his dance moves\n" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(FragTrap &f){
	if (this->energy < 10)
		std::cout << this->name << ": I'm out of energy" << std::endl;
	else{
		this->energy -= 10;
		if (this->energy < 0)
			this->energy = 0;
		std::cout <<  this->type << " " << this->name << " attacks " << f.getName()
					<< " with shurikens\n" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(ScavTrap &s){
	if (this->energy < 25)
		std::cout << this->name << ": I'm out of energy" << std::endl;
	else{
		this->energy -= 25;
		if (this->energy < 0)
			this->energy = 0;
		std::cout << this->type << " " << this->name << " make " << s.getName()
					<< " cry\n" << std::endl;
	}
	
}

void NinjaTrap::ninjaShoebox(NinjaTrap &n){
	std::cout << this->name << ": Time to recharge energy" << std::endl;

	this->energy += 15;
	if (this->energy > this->maxEnergy)
		this->energy = this->maxEnergy;
	std::cout << "Diagnosis: " << this->energy << " remaining energy points\n" << std::endl;
}
