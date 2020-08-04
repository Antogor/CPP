/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:40:12 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/04 18:19:30 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
}

Brain::~Brain(){
}

std::string Brain::identify(){
	long adress = (long)this;
	std::stringstream st;
	st << "0x" << std::uppercase << std::hex << adress;
	return st.str();
}

