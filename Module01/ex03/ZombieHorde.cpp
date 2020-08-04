/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:14:38 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/04 14:39:09 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n){
	this->n = n;
	if (n <= 0)
		std::cout << "The dead are sleeping" << std::endl;
	else
	{
		horde = new Zombie[n];
		for (int i = 0; i < n; i++)
			horde[i] = Zombie(Zombie::randomName(3), "horde");
		std::cout << "The dead are rising" << std::endl;
	}
}

ZombieHorde::~ZombieHorde(){
	if (n > 0)
	{
		delete []horde;
		std::cout << "Horde destroyed" << std::endl;
	}
}

void ZombieHorde::announce(){
	if (n <= 0)
		std::cout << "Don't disturbed the zombies" << std::endl;
	else
	{
		for (int i = 0; i < n; i++)
			horde[i].announce();
	}
}
