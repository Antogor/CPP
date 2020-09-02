/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 17:41:18 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 19:43:46 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

SuperTrap::SuperTrap(std::string const &name): ClapTrap(name), NinjaTrap(name), FragTrap(name){
	this->hit = this->FragTrap::hit;
	this->maxHit = this->FragTrap::maxHit;
	this->energy = this->NinjaTrap::energy;
	this->maxEnergy = this->NinjaTrap::maxEnergy;
	this->melee = this->NinjaTrap::melee;
	this->ranged = this->FragTrap::ranged;
	this->armor = this->FragTrap::armor;
	std::cout << "Hey everybody! Check out my SUPER package!\n" << std::endl;
}

SuperTrap::~SuperTrap(){
	std::cout << "No, nononono NO! Crap!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &sup) : ClapTrap(sup), FragTrap(sup), NinjaTrap(sup){
	std::cout << "Hey everybody! Check out my SUPER package!\n" << std::endl;
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

	return *this;
}

int SuperTrap::rangedAttack(const std::string &target){
	return FragTrap::rangedAttack(target);
}

int SuperTrap::meleeAttack(const std::string &target){
	return NinjaTrap::meleeAttack(target);
}
