#include "Span.hpp"

Span::Span(unsigned int n): n(n){
}

Span::~Span(){

}

Span::Span(Span const &other){
	this->n = other.n;
	this->vec = other.vec;
}

Span &Span::operator=(Span const &other){
	this->n = other.n;
	this->vec = other.vec;

	return *this;
}

void Span::addNumber(unsigned int n){
	if (vec.size() < this->n)
		vec.push_back(n);
	else
		throw Span::FillException();
}

unsigned int Span::shortestSpan() const{
	if (vec.empty() || vec.size() == 1)
		throw Span::ExecutionException();
	return *std::min_element(vec.begin(), vec.end());
}

unsigned int Span::longestSpan() const{
	if (vec.empty() || vec.size() == 1)
		throw Span::ExecutionException();
	return *std::max_element(vec.begin(), vec.end());
}

const char *Span::FillException::what() const throw(){
	return "FillException: all numbers are stored";
}

const char *Span::ExecutionException::what() const throw(){
	return "ExecutionException: there are none or one number stored";
}

unsigned int Span::getNumber() const{
	return this->n;
}

std::vector<unsigned int> Span::getContainer() const {
	return this->vec;
}


std::ostream &operator<<(std::ostream &out, Span const &other){
	std::vector<unsigned int> v = other.getContainer();

	out << "Container with size " << other.getNumber() << "\nValues:" << std::endl;

	for (std::vector<unsigned int>::iterator i = v.begin(); i != v.end(); i++){
		out << *i << std::endl;
	}
	return out;
}


