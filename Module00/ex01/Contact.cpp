#include "Contact.hpp"
                                                
Contact::Contact(){
}


Contact::~Contact(){
}

void Contact::setData(int nb, std::string info){
	data[nb] = info;
}

std::string Contact::getData(int nb){
	return data[nb];
}
