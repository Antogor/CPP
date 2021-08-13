#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Hi doggie" << std::endl;
}

Dog::~Dog(){
	std::cout << "The dog gone" << std::endl;
	delete this->brain;
}

Dog::Dog(Dog const &other){
	this->type = other.type;
	this->brain = other.brain;
}

Dog &Dog::operator=(Dog const &other){
	this->type = other.type;
	this->brain = other.brain;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Guau guau" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Dog const &other){
	out << "This animal is a " << other.getType() << std::endl;
	return out;
}


