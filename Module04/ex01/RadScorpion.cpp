/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:33:08 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 16:31:47 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion"){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(){
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &rad)
		: Enemy(rad)
{
}

RadScorpion &RadScorpion::operator=(const RadScorpion &rad){
	this->hp = rad.hp;
	this->type = rad.type;

	return *this;
}

