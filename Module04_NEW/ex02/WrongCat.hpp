#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <ostream>
# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	public:
			WrongCat();
			WrongCat(WrongCat const &other);
			virtual ~WrongCat();
			
			void makeSound() const;

			WrongCat &operator=(WrongCat const &other);


};

	std::ostream &operator<<(std::ostream &out, WrongCat const &other);

#endif
