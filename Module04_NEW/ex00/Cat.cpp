#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->type = "Cat";
}

Cat::~Cat(){
	std::cout << "The cat gone" << std::endl;
}

Cat::Cat(Cat const &other){
	this->type = other.type;
}

Cat &Cat::operator=(Cat const &other){
	this->type = other.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miau miau" << std::endl;
}


std::ostream &operator<<(std::ostream &out, Cat const &other){
	out << "This animal is a " << other.getType() << std::endl; 
	return out;
}


