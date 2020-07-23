#include "Agend.hpp"

void fillContact(Agend *phone){
		std::string fields[11] = {
             "Ana",
             "12345678901",
             "Abby",
             "anF",
             "23005",
             "an@gg.com",                                                              
             "6665774",
             "21/05/30",
             "Meat",
             "pink",
             "is terranplain"
 		};
		phone->add(fields);
}

int printAgend (Agend phone){
	int l;

	std::cout << std::setw(10) << "Index" << " | " << std::setw(10) << "First Name" << " | "; 
	std::cout << std::setw(10 )<< "Last Name" << " | " << std::setw(10) << "Nick" << " | ";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++){
		std::cout << std::setw(10);
		std::cout << i+1;
		std::cout << " | ";
		for (int l = 0; l < 3; l++){
			std::cout << std::setw(10);
			if (phone.book[i].data[l].size() >= 10)
				std::cout << phone.book[i].data[l].replace(9,1,".").erase(10, phone.book[i].data[l].size()-1);
			else
				std::cout << phone.book[i].data[l];
			std::cout << " | ";
		}
		std::cout << std::endl;
	}
	std::cout << '\n' << "Select contact to see more information" << std::endl;
	std::cin >> l;		
	return l;		
}


int main(){
	Agend phone;
	fillContact(&phone);
	fillContact(&phone);
	fillContact(&phone);
	fillContact(&phone);
	fillContact(&phone);
	fillContact(&phone);
	fillContact(&phone);
	fillContact(&phone);
	//printAgend(phone);
	//pedir el numero
  	phone.search(printAgend(phone));
 
    return 0;
}
