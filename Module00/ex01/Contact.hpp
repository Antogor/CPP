#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact{
private:
    std::string name;
    std::string lName;
    std::string nick;
    std::string login;
	std::string postal;
    std::string mail;
	std::string phone;
	std::string birth;
    std::string meal;
    std::string underwear;
    std::string darkestSecret;

public:
	std::string data[11];
    Contact();

    ~Contact();

};




#endif
