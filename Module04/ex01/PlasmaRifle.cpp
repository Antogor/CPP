/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:03:36 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 16:33:12 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21){
}

PlasmaRifle::~PlasmaRifle(){
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &p)
		:AWeapon(p){
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &p){
	this->name = p.name;
	this->apcost = p.apcost;
	this->damage = p.damage;

	return *this;
}

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
