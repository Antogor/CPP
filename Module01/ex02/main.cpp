/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 17:49:20 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/31 18:28:15 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main (void){

	ZombieEvent z;
	z.setZombieType("lento");
	Zombie *zo = z.newZombie("Juan");
	zo->announce();
	z.setZombieType("rapido");
	Zombie *zo2 = z.newZombie("Alicia");
	zo2->announce();
	zo->announce();

	ZombieEvent z2;
	Zombie *zw = z2.randomChump();
	Zombie *z4 = z2.randomChump();
	Zombie *z3 = z2.randomChump();
	Zombie *z5 = z2.randomChump();
	Zombie *z6 = z2.randomChump();
	Zombie *z7 = z2.randomChump();
	delete zw;
	delete z4;
	delete z3;
	delete z5;
	delete z6;
	delete z7;
}
