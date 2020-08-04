/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 17:49:20 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/04 11:52:27 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void zombieBattle()
{
		Zombie dangerous[4];
		Zombie harmless[4];

		for (int i = 0; i < 4; i++){
			dangerous[i] = Zombie(Zombie::randomName(3), "dangerous");
			harmless[i] = Zombie(Zombie::randomName(4), "harmless");
		}
		for (int i = 0; i < 4; i++){
			dangerous[i].announce();
			harmless[i].announce();
		}
}

int main (void){

	ZombieEvent slowType;
	ZombieEvent fastType;
	Zombie *slow[3];
	Zombie *fast[3];

	slowType.setZombieType("slow");
	fastType.setZombieType("fast");
	for (int i = 0; i < 3; i++)
		slow[i] = slowType.randomChump();
	std::cout << "---------------------------------" << std::endl;
	for (int i = 0; i < 3; i++)
		fast[i] = fastType.randomChump();
	std::cout << "\nBattle on the stack" << std::endl;
	zombieBattle();
	std::cout << "\nOh no, the slow and fast zombies are dying" << std::endl;
	for (int i = 0; i < 3; i++)
		delete slow[i];
	std::cout << "--------" << std::endl;
	for (int i = 0; i < 3; i++)
		delete fast[i];
	return 0;
}
