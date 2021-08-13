/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 14:02:26 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 16:35:51 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){

}

Ice::~Ice(){

}

Ice::Ice(Ice const &other) : AMateria(other){
}

Ice &Ice::operator=(const Ice &other){
	this->_xp = other._xp;

	return *this;
}

AMateria *Ice::clone() const{
	Ice *cloned = new Ice(*this);
	return cloned;
}

void Ice::use(ICharacter &target){
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName()
				<< " *" << std::endl;
}
