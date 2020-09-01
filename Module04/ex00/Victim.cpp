/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 12:41:17 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 13:18:46 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const &name) : name(name){
	std::cout << "Some random victim called " << this->name
				<< " just appeared!" << std::endl;
}

Victim::~Victim(){
	std::cout << "Victim " << this->name
				<< " just died for no apparent reason!"
				<< std::endl;
}

Victim::Victim(Victim const &v){
	*this = v;
}

Victim &Victim::operator=(const Victim &v){
	this->name = v.name;

	return *this;
}

std::string const &Victim::getName() const{
	return this->name;
}

void Victim::getPolymorphed() const{
		std::cout << this->name << " has been turned into a cute little sheep!"
					<< std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &v){
	out << "I'm " << v.getName() << " and I like otters!" << std::endl;
	return out;
}
