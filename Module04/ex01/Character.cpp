/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:48:49 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 18:22:03 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"

Character::Character(std::string const &name) : name(name){
	this->ap = 40;
	this->weapon = NULL;
}

Character::~Character(){
}

Character::Character(Character const &c){
	this->name = c.name;
	this->ap = c.ap;
	this->weapon = c.weapon;
}

Character &Character::operator=(const Character &c){
	this->name = c.name;
	this->ap = c.ap;
	this->weapon = c.weapon;

	return *this;
}

void Character::recoverAP(){
	this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *weapon){
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy){
	if (this->ap <= 0 || this->weapon->getAPCost() > this->ap ||
			this->weapon == NULL)
		return ;
	else{
		std::cout << this->name << " attacks " << enemy->getType()
					<< " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		this->ap -= this->weapon->getAPCost();
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::string const &Character::getName() const{
	return this->name;
}

int Character::getAp() const{
	return this->ap;
}

AWeapon *Character::getWeapon() const{
	return this->weapon;
}

std::ostream &operator<<(std::ostream &out, Character const &c){
	if (c.getWeapon() != NULL){
		out << c.getName() << " has " << c.getAp()
					<< " AP and wields a " << c.getWeapon()->getName()
					<< std::endl;
	}
	else{
		out << c.getName() << " has " << c.getAp()
					<< " AP and is unarmed" << std::endl;

	}
	return out;
}
