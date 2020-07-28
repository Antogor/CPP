#include "Agend.hpp"

void fillContact(Agend *phone){
		std::string information[11];
		int i = 0;
		while (i < 11){
			phone->printInf(i);
			std::getline(std::cin, information[i]);
			if (!information[i].empty())
				i++;
		}
		phone->add(information);
		std::cout << "\n CONTACT SAVED" << std::endl;
		std::cout << std::endl;
		std::cout.clear();
}

void printMenu(){
	std::cout.width(5);
	std::cout << std::left << "\n|Index";
	std::cout.width(1); std::cout << "|";
	std::cout.width(10); std::cout << std::left << "First Name"; 
	std::cout.width(1); std::cout << "|";
	std::cout.width(10); std::cout << std::left << "Last Name"; 
	std::cout.width(1); std::cout << "|";
	std::cout.width(10); std::cout << std::left << "Nick"; 
	std::cout.width(1); std::cout << "|";
	std::cout << std::endl;
	std::cout << "|-----|----------|----------|----------|" << std::endl;
}

int printAgend (Agend phone){
	char l;
	printMenu();
	for (int i = 0; i < 8; i++){
		std::cout.width(1);
		std::cout << std::left<< "|";
		std::cout.width(5); std::cout << std::right<< i+1;
		std::cout.width(1);
		std::cout << std::left<< "|";
		for (int l = 0; l < 3; l++){
			if (phone.book[i].getData(l).size() >= 10){
				std::cout.width(10);
				std::cout << std::left<< phone.book[i].getData(l).replace(9,1,".")
							.erase(10, phone.book[i].getData(l).size()-1);
				std::cout.width(1);
				std::cout << std::left<< "|";
			}
			else{
				std::cout.width(10);
				std::cout << std::left<< phone.book[i].getData(l);
				std::cout.width(1);
				std::cout << std::left<< "|";
			}
		}
		std::cout << std::endl;
		std::cout << "|-----|----------|----------|----------|" << std::endl;
	}
	std::cout << '\n' << "Select contact to see more information" << std::endl;
	std::cin >> l;
	std::cin.ignore();
	return l - '0';		
}

int main(){
	Agend phone;
	std::string option;

	std::cout << "WELCOME!" << std::endl;
	std::cout << "I'm your awosome 80's mobilphone\n\n";
	while (1) {
		std::cout << "Select an option:" << std::endl;
		std::cout << "ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, option);
		if (option.compare("ADD") == 0 || option.compare("add") == 0)
			fillContact(&phone);
		else if (option.compare("SEARCH") == 0 || option.compare("search") == 0)
			phone.search(printAgend(phone));
		else if (option.compare("EXIT") == 0 || option.compare("exit") == 0)
			break ;
		else{
			std::cout << "I'm a mobilphone from the 80's, ";
			std::cout << "i don't undestand this option, sorry\n\n";
		}
	}
	std::cout << "BYE! \n";
    return 0;
}
