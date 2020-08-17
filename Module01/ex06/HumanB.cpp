/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 19:21:38 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/17 19:28:51 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

void HumanB::attack() const{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
