/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 17:10:26 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 18:00:31 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	this->count = 0;
	for (int i = 0; i < 4; i++)
		this->source[i] = nullptr;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < this->count; i++)
		delete this->source[i];
}

MateriaSource::MateriaSource(MateriaSource const &other){
	this->count = 0;
	for (int i = 0; i < other.count; i++)
		this->learnMateria(other.source[i]->clone());
	for (int i = this->count; i < 4; i++)
		this->source[i] = nullptr;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other){
	for (int i = 0; i < this->count; i++)
		delete this->source[i];
	this->count = 0;
	for (int i = 0; i < other.count; i++)
		this->learnMateria(other.source[i]->clone());
	for (int i = this->count; i < 4; i++)
		this->source[i] = nullptr;

	return *this;
}

void MateriaSource::learnMateria(AMateria *m){
	if (this->count == 4 || m == nullptr)
		return ;
	this->source[this->count] = m;
	this->count++;
}

AMateria *MateriaSource::createMateria(const std::string &type){
	for(int i = 0; i < this->count; i++)
		if (this->source[i]->getType() == type)
			return this->source[i];
	return nullptr;
}
