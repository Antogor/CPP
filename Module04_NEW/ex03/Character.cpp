/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 15:42:37 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 17:43:34 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name){
	this->count = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::~Character(){
	for (int i = 0; i < this->count; i++)
		this->inventory[i] = nullptr;
}

Character::Character(Character const &other){
	this->name = other.name;
	this->count = 0;
	for (int i = 0; i < this->count; i++)
		this->equip(other.inventory[i]->clone());
	for (int i = this->count; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character &Character::operator=(const Character &other){
	this->name = other.name;
	for (int i = 0; i < this->count; i++)
		delete this->inventory[i];
	this->count = 0;	
	for (int i = 0; i < other.count; i++)
		this->equip(other.inventory[i]->clone());
	for (int i = this->count; i < 4; i++)
		this->inventory[i] = nullptr;

	return *this;
}

std::string const &Character::getName() const{
	return  this->name;
}

void Character::equip(AMateria *m){
	if (this->count == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->count; i++)
		if (this->inventory[i] == m)
			return ;
	this->inventory[this->count] = m;
	this->count++;
}

void Character::unequip(int idx){
	if (!this->inventory[idx] || idx < 0 || idx >= this->count)
		return ;
	for (int i = idx; i < 3; i++){
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = nullptr;
	}
	this->count--;
}

void Character::use(int idx, ICharacter &target){
	if (!this->inventory[idx] || idx < 0 || idx >= this->count)
		return ;
	this->inventory[idx]->use(target);
}
