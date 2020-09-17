/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:16:29 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/17 17:15:52 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name){
	this->energy = 50;
	this->maxEnergy = 50;
	this->armor = 3;
	this->type = "SC4V-TP";
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

ScavTrap::ScavTrap(const ScavTrap &s) : ClapTrap(s){
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
	this->type = s.type;
	this->challenges[0] = s.challenges[0];
	this->challenges[1] = s.challenges[1];
	this->challenges[2] = s.challenges[2];
	this->challenges[3] = s.challenges[3];
	this->challenges[4] = s.challenges[4];
	
	return *this;
}

void ScavTrap::challengeNewcomer(){
	std::cout << this->name << ": " << this->challenges[std::rand() % 5] << std::endl;
}
