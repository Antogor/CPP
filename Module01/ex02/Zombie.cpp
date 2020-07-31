/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:48:13 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/31 16:58:22 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
