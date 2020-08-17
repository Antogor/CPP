/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:48:57 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/17 19:19:20 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::~Weapon(){
}

std::string const &Weapon::getType() const{
	return this->type;
}

void Weapon::setType(std::string type){
	this->type = type;
}
