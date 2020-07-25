#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
	private:
		std::string data[11];
	
	public:
	    Contact();
	    ~Contact();
		void setData(int nb, std::string info);
		std::string getData(int nb);
};




#endif
