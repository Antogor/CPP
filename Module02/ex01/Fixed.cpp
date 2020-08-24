/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 10:48:16 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/24 13:32:08 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f){
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	this->value = (n << Fixed::bits);
}

Fixed::Fixed(const float n){
	std::cout << "Float constructor called" << std::endl;
	this->value = std::roundf(n * (1 << Fixed::bits));
}

Fixed& Fixed::operator=(const Fixed &f){
	std::cout << "Assignation operator called" << std::endl;
	this->value = f.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &f){

	out << f.toFloat();
	return out;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(const int raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat(void) const{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const{
	return (this->value >> Fixed::bits);
}
