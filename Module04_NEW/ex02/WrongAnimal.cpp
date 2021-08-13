#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->type = "Is a wrong Animal";

}

WrongAnimal::~WrongAnimal(){
	std::cout << "Goodbye Wrong Animal" << std::endl;

}

WrongAnimal::WrongAnimal(WrongAnimal const &other){
	this->type = other.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other){
	this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << "An other wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}

std::ostream &operator<<(std::ostream &out, WrongAnimal const &other){
	out << "This " << other.getType() << std::endl;
	return out;
}


