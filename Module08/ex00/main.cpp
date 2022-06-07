#include "easyfind.hpp"

int main (){
	
	
		std::list<int> lst;
		std::vector<int> vec;
		int result;
		std::string textResult;

		textResult = "Number found ";

		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);

		vec.push_back(42);
		vec.push_back(100);


		try{
			result = easyfind(lst, 3);
			std::cout << "LIST: " << textResult << result << std::endl;
			result = easyfind(vec, 24);
			std::cout << "VECTOR: " << textResult << result << std::endl;
		} catch(NotFoundException &e){
			std::cerr << e.what() << std::endl;
		}

		return 0;
	
}
