/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 13:46:21 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 14:57:03 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type){
	this->_xp = 0;
}

AMateria::~AMateria(){

}

AMateria::AMateria(AMateria const &other){
	this->type = other.type;
	this->_xp = other._xp;
}

AMateria &AMateria::operator=(AMateria const &other){
	this->type = other.type;
	this->_xp = other._xp;

	return *this;
}

std::string const &AMateria::getType() const{
	return this->type;
}

unsigned int AMateria::getXP() const{
	return this->_xp;
}

void AMateria::use(ICharacter &target){
	(void)target;
	this->_xp += 10;
}
