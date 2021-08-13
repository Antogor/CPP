#include "Animal.hpp"

Animal::Animal(){
	this->type = "Animal";
}

Animal::~Animal(){
	std::cout << "Goodbye my animal friend" << std::endl;
}

Animal::Animal(Animal const &other){
	this->type = other.type;
}

Animal &Animal::operator=(Animal const &other){
	this->type = other.type;
	return *this;
}

void Animal::makeSound() const{
	std::cout << "An other animal sound" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

std::ostream &operator<<(std::ostream &out, Animal const &other){
	out << "This is an other " << other.getType() << std::endl;
	return out;
}


