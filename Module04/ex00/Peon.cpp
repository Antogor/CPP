/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 13:00:08 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 13:12:07 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string const &name) : Victim(name){
	std::cout << "Zog zog" << std::endl;	
}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &p) : Victim(p.name){
	*this = p;
}

Peon &Peon::operator=(const Peon &p){
	this->name = p.name;

	return *this;
}

void Peon::getPolymorphed() const{
	std::cout << this->getName() << " has been turned into a pink pony!"
				<< std::endl;
}
