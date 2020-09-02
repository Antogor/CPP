/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 14:55:32 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 16:39:20 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){

}

Cure::~Cure(){

}

Cure::Cure(Cure const &other) : AMateria(other){
}

Cure &Cure::operator=(const Cure &other){
	this->_xp = other._xp;

	return *this;
}

AMateria *Cure::clone() const{
	Cure *cloned = new Cure(*this);
	return cloned;
}

void Cure::use(ICharacter &target){
	AMateria::use(target);
	std::cout << "* heals " << target.getName()
				<< "'s wounds *" << std::endl;
}
