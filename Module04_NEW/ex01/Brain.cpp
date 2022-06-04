#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Turn Brain on" << std::endl;
}

Brain::~Brain(){
	std::cout << "Turn Brain off" << std::endl;
}

void Brain::setIdeas(const std::string idea)
{
	this->ideas[0] = idea;
}

std::string Brain::getIdeas()
{
	return this->ideas[0];
//	return "";
}
