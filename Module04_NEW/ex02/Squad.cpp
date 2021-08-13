/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 18:31:48 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 10:58:02 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(){
	this->count = 0;
	this->units = nullptr;
}

Squad::~Squad(){
	if (this->units){
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

Squad::Squad(Squad const &s){
	this->count = 0;
	for(int i = 0; i < s.getCount(); i++)
		this->push(s.getUnit(i)->clone());
}

Squad &Squad::operator=(const Squad &s){
	if(this->units){
		for(int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
		this->units = nullptr;
	}
	this->count = 0;
	for (int i = 0; i < s.getCount(); i++)
		this->push(s.getUnit(i)->clone());
	return *this;
}

int Squad::getCount() const{
	return this->count;
}

ISpaceMarine *Squad::getUnit(int n) const{
	if(this->count == 0 || n < 0 || n >= this->count)
		return nullptr;
	return this->units[n];
}

int Squad::push(ISpaceMarine *sm){
	if (!sm)
		return this->count;
	if (this->units){
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == sm)
				return this->count;
		ISpaceMarine **tmp = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			tmp[i] = this->units[i];
		delete[] this->units;
		this->units = tmp;
		this->units[this->count] = sm;
		this->count++;
	}
	else{
		this->units = new ISpaceMarine*[1];
		this->units[this->count] = sm;
		this->count += 1;
	}
	return this->count;
}
