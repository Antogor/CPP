/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 13:40:34 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 13:46:44 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
		: name(name)
{
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon(){

}

AWeapon::AWeapon(AWeapon const &w){
	*this = w;
}

AWeapon &AWeapon::operator=(const AWeapon &w){
	this->name = w.name;
	this->apcost = w.apcost;
	this->damage = w.damage;

	return *this;
}

std::string const &AWeapon::getName() const{
	return this->name;
}

int AWeapon::getAPCost() const {
	return this->apcost;
}

int AWeapon::getDamage() const {
	return this->damage;
}

