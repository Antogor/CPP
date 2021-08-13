#ifndef DOG_HPP
# define DOG_HPP
# include <ostream>
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
			Brain* brain;
	public:
			Dog();
			Dog(Dog const &other);
			virtual ~Dog();

			void makeSound() const;
			
			Dog &operator=(Dog const &other);


};

	std::ostream &operator<<(std::ostream &out, Dog const &other);

#endif
