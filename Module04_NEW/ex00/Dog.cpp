#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->type = "Dog";
}

Dog::~Dog(){
	std::cout << "The dog gone" << std::endl;
}

Dog::Dog(Dog const &other){
	this->type = other.type;
}

Dog &Dog::operator=(Dog const &other){
	this->type = other.type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Guau guau" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Dog const &other){
	out << "This animal is a " << other.getType() << std::endl;
	return out;
}


