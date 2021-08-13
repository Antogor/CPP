#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	this->type = "Wrong Cat";
}

WrongCat::~WrongCat(){
	std::cout << "The wrong Cat is gone" << std::endl;

}

WrongCat::WrongCat(WrongCat const &other){
	this->type = other.type;
}

WrongCat &WrongCat::operator=(WrongCat const &other){
	this->type = other.type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "Coff coff" << std::endl;
}

std::ostream &operator<<(std::ostream &out, WrongCat const &other){
	out << "This is a " << other.getType() << std::endl;
	return out;
}


