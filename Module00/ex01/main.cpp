#include "Agend.hpp"

void fillContact(Agend *phone){
		std::string fields[11] = {
			"Name: ",
            "Last name: ",
            "Nickname: ",
            "Login: ",
            "Postal address: ",
            "Email: ",
            "Phone number: ",
            "Birthday date: ",
            "Favorite meal: ",
            "Underwear color: ",
            "Darkest secret: "
 		};
		std::string information[11];
		for (int i = 0; i < 11; i++){
			std::cout << fields[i];
			std::cin >> information[i];
		}
		phone->add(information);
		std::cout << "\n CONTACT SAVED" << std::endl; //Dar color
		std::cout << std::endl;
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
	std::string option;
	int nb;

	std::cout << "WELCOME!" << std::endl;
	std::cout << "I'm your awosome 80's mobilphone\n\n";
	while (1) {
		std::cout << "Select an option:" << std::endl;
		std::cout << "ADD, SEARCH, EXIT" << std::endl;
		std::cin >> option;
		if (option.compare("ADD") == 0)
			fillContact(&phone);
		else if (option.compare("SEARCH") == 0)
  			phone.search(printAgend(phone));
		else if (option.compare("EXIT") == 0)
			break ;
		else
			std::cout << "I'm a mobilphone from the 80's, i don't undestand this option, sorry\n\n";
	}
	std::cout << "BYE! \n";
    return 0;
}
