#include "Span.hpp"

int main(){

	Span s(5);

	s.addNumber(2);
	s.addNumber(9);
	s.addNumber(8);
	s.addNumber(1);
	s.addNumber(6);

	std::cout << s << std::endl;
	std::cout << "GETTING THE LONGEST AND SHORTEST" << std::endl;
	std::cout << "Longest: " << s.longestSpan() << std::endl;
	std::cout << "Shortest: " << s.shortestSpan() << std::endl;

//	std::cout << "\nTRY TO ADD MORE NUMBERS" << std::endl;
//	try{
//		s.addNumber(1);
//	}catch(Span::FillException e){
//		std::cout << e.what() << std::endl;
//	}

//	std::cout << "\nTRY TO GETTING LONGEST AND SHORTEST WITH ONLY ONE OR NONE NUMBERS" << std::endl;
//	try{
//		Span s2(1);
//		s2.addNumber(42);
//		s2.longestSpan();
//	}catch(Span::ExecutionException e){
//		std::cout << e.what() << std::endl;
//	}

	std::cout << "\nSPAN WITH A LOT OF NUMBERS" << std::endl;
	
	
	return 0;
}
