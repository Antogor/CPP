/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agend.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:46:32 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/27 18:40:50 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agend.hpp"

static Contact c;

Agend::Agend(){
	index = 0;
	inf[0] = "Name: ";
	inf[1] = "Last name: ";
	inf[2] = "Nickname: ";
	inf[3] = "Login: ";
	inf[4] = "Postal address: ";
	inf[5] = "Email: ";
	inf[6] = "Phone number: ";
	inf[7] = "Birthday date: ";
	inf[8] = "Favorite meal: ";
	inf[9] = "Underwear color: ";
	inf[10] = "Darkest secret: ";
}

Agend::~Agend(){
}

void Agend::add(std::string fields[11]){
	for (int i = 0; i < 11; i++) {
		c.setData(i, fields[i]);
	}
	if (index == 8)
		index = 0;
	book[index] = c;
	index += 1;
}

void Agend::search(int nb){
	if (nb < 1 || nb > 8 || book[nb-1].getData(0).empty())
		std::cout << "This contact doesn't exist" << std::endl;
	else{
		for (int i = 0; i < 11; i++){
			printFormat(i);
			std::cout << book[nb-1].getData(i) << std::endl;
		}
	}
	std::cout << "\n";
}

void Agend::printInf(int i){
	std::cout << inf[i] << "\n";
}

void Agend::printFormat(int i){
	std::cout.width(18);
	std::cout << std::left << inf[i];
}

