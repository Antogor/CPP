#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Hi kitty" << std::endl;
}

Cat::~Cat(){
	std::cout << "The cat gone" << std::endl;
	delete this->brain;
}

Cat::Cat(Cat const &other){
	this->type = other.type;
	this->brain = other.brain;
}

Cat &Cat::operator=(Cat const &other){
	this->type = other.type;
	this->brain = other.brain;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miau miau" << std::endl;
}


std::ostream &operator<<(std::ostream &out, Cat const &other){
	out << "This animal is a " << other.getType() << std::endl; 
	return out;
}


