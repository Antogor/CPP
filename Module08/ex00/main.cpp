#include "easyfind.hpp"

int main (){
	
	
		std::list<int> lst;
		std::vector<int> vec;
		std::string textResult;

		textResult = "Number found ";

		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);

		vec.push_back(42);
		vec.push_back(100);


		try{
			std::cout << "LIST: " << textResult << *easyfind(lst, 3) << std::endl;
			std::cout << "VECTOR: " << textResult << *easyfind(vec, 24) << std::endl;
		} catch(NotFoundException &e){
			std::cerr << e.what() << std::endl;
		}

		return 0;
	
}
