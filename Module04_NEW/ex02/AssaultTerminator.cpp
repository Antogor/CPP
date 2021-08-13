/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 18:23:17 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 18:26:34 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &a){
	(void)a;
	std::cout << "* teleports from space *" << std::endl;

}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &a){
	(void)a;
	return *this;
}

ISpaceMarine *AssaultTerminator::clone() const{
	AssaultTerminator *cloned = new AssaultTerminator(*this);
	return cloned;
}

void AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with a chainfists *" << std::endl;
}
