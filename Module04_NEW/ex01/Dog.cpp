#include "Dog.hpp"
#include "Brain.hpp"
#include <string>

Dog::Dog() : Animal(){
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Hi doggie" << std::endl;
}

Dog::~Dog(){
	std::cout << "The dog gone" << std::endl;
//	delete this->brain;
}

Dog::Dog(Dog const &other):Dog() {
	this->type = other.type;
	*this->brain = *(other.brain);
}

Dog &Dog::operator=(Dog const &other){
	this->type = other.type;
	this->brain = new Brain();
	*this->brain = *(other.brain);
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Guau guau" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Dog const &other){
	out << "This animal is a " << other.getType() << std::endl;
	return out;
}

std::string Dog::getIdea()
{
	std::string i =  this->brain->getIdeas();
	return i;
}

void Dog::setThink(const std::string idea)
{
	this->brain->setIdeas(idea);
}

std::string Dog::getType() const
{
	return this->type;
}

void Dog::setType(const std::string type)
{
	this->type = type;
}
