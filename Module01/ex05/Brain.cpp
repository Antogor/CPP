/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:40:12 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/07 13:07:31 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	neurons = 3;
}

Brain::~Brain(){
}

std::string Brain::identify() const{
	const long adress = (long)this;
	std::stringstream st;
	st << "0x" << std::uppercase << std::hex << adress;
	return st.str();
}


int Brain::getNeurons(){
	return neurons;
}

void Brain::setNeurons(int n){
	neurons = n;
}
