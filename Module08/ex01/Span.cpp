#include "Span.hpp"

Span::Span(unsigned int n): n(n){
}

Span::~Span(){

}

Span::Span(Span const &other){
	other.longestSpan();
}

Span &Span::operator=(Span const &other){
	other.longestSpan();

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


std::ostream &operator<<(std::ostream &out, Span const &other){
	out << other.longestSpan();
	return out;
}


