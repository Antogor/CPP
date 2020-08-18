/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:48:13 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/18 17:56:07 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string n, std::string t){
	name = n;
	type = t;
}

Zombie::~Zombie(){
	std::cout << "Arggghhh" << std::endl;
}

void Zombie::announce(){
	std::cout << name << " (" << type << ") " << "Braiiiinnnssss...." << std::endl;
}

std::string Zombie::randomName(std::string::size_type len){
    std::string letters;
    std::string s;

    letters = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUwWxXyYzZ:_-";
    while (len--)
        s += letters[std::rand() % 53];
    return s;
}

void Zombie::setZombie(std::string name, std::string type){
	this->name = name;
	this->type = type;
}
