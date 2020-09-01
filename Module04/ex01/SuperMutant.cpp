/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:25:03 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 16:32:16 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &sup)
		: Enemy(sup)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &sup){
	this->hp = sup.hp;
	this->type = sup.type;

	return *this;
}

void SuperMutant::takeDamage(int damage){
	damage -= 3;
	if (damage < 0)
		damage = 0;
	this->hp -= damage;
	if (this->hp < 0)
		this->hp = 0;
}
