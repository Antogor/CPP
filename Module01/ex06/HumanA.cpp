/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:58:37 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/17 19:14:33 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon const &weapon): weapon(weapon){
	this->name = name;
}

HumanA::~HumanA(){
}

void HumanA::attack() const{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
