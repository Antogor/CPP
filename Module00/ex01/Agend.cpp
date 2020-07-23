/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agend.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:46:32 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/23 20:08:32 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agend.hpp"

std::string information[11] = {
            "Name",
            "Last name",
            "Nickname",
            "Login",
            "Postal address",
            "Email",
            "Phone number",
            "Birthday date",
            "Favorite meal",
            "Underwear color",
            "Darkest secret"
};

static Contact c;

Agend::Agend(){
	this->index = 0;
}

Agend::~Agend(){
}

void Agend::add(std::string fields[11]){
	for (int i = 0; i < 11; i++) {
		c.data[i] = fields[i];
	}
	if (this->index == 8)
		this->index = 0;
	this->book[this->index] = c;
	this->index += 1;
}

void Agend::search(int nb){
	if (nb > 8 || nb <= 0 || this->book[nb].data->empty())
		std::cout << "This contact doesn't exits" << std::endl;
	else{
		for (int i = 0; i < 11; i++){
			std::cout << std::setfill('.');
			std::cout << information[i] << std::setw(19) << this->book[nb-1].data[i] << std::endl;
			std::setfill('\0');
		}
	}
}

