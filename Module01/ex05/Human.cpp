/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 12:11:44 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/07 13:10:33 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){
}

Human::~Human(){
}

std::string Human::identify() const{
	return this->br.identify();
}

const Brain &Human::getBrain() const{
	return br;
}
