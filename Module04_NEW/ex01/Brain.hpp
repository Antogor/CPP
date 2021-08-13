#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <ostream>
# include <string>
# include <iostream>

class Brain
{
	private:
			std::string ideas[100];
	public:
			Brain();
			virtual ~Brain();
};

#endif
