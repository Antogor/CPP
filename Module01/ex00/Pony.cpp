/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:16:38 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/31 16:34:27 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(){
}

Pony::~Pony(){
	std::cout << "Bye human, i have to return to my planet" << std::endl;
}

void Pony::speak(std::string sentence){
	dialog = sentence;
	std::cout << dialog << std::endl;
}
