/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:58:32 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/04 11:48:16 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent(){
	type = "";
}

ZombieEvent::~ZombieEvent(){
}

void ZombieEvent::setZombieType(std::string type){
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name){
	Zombie *z = new Zombie(name, this->type);
	return z;
}

Zombie *ZombieEvent::randomChump(){
	Zombie *ramdon = new Zombie(Zombie::randomName(6), type);
	ramdon->announce();
	return ramdon;
}

