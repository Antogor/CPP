/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 12:17:16 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 13:19:40 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
		: name(name), title(title){
	std::cout << this->name << ", " << this->title
				<< ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(){
	std::cout << this->name << ", " << this->title
				<< ", is dead. Consequences wil never be the same!"
				<< std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &s){
	*this = s;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &s){
	this->name = s.name;
	this->title = s.title;

	return *this;
}

std::string const &Sorcerer::getName() const{
	return this->name;
}

void Sorcerer::polymorph(const Victim &v) const{
	v.getPolymorphed();	
}

std::string const &Sorcerer::getTitle() const{
	return this->title;
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &s){

	out << "I am " << s.getName() << ", " << s.getTitle()
			<< ", and I like ponies!" << std::endl;
	return out;
}
