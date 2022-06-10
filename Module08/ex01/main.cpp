#include "Span.hpp"

int main(){

	Span s(5);

	s.addNumber(2);
	//s.addNumber(6);
	//s.addNumber(8);
	//s.addNumber(9);
	//s.addNumber(1);

	std::cout << "Longest: " << s.longestSpan() << std::endl;
	std::cout << "Shortest: " << s.shortestSpan() << std::endl;
	//s.addNumber(1);
	return 0;
}
