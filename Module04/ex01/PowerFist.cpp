/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:04:16 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 16:33:52 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){
}

PowerFist::~PowerFist(){
}

PowerFist::PowerFist(PowerFist const &w)
		:AWeapon(w){
}

PowerFist &PowerFist::operator=(const PowerFist &w){
	this->name = w.name;
	this->apcost = w.apcost;
	this->damage = w.damage;

	return *this;
}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
