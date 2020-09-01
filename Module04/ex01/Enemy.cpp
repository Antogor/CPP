/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:10:31 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 14:30:32 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : type(type){
	this->hp = hp;
}

Enemy::~Enemy(){
}

Enemy::Enemy(Enemy const &e){
	*this = e;
}

Enemy &Enemy::operator=(const Enemy &e){
	this->hp = e.hp;
	this->type = e.type;

	return *this;
}

std::string const &::Enemy::getType() const{
	return this->type;
}

int Enemy::getHP() const{
	return this->hp;
}

void Enemy::takeDamage(int damage){
	if (damage < 0)
		damage = 0;
	this->hp -= damage;
	if (this->hp < 0)
		this->hp = 0;
}
