#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <ostream>
# include <string>
# include <iostream>

class Animal
{
	protected:
			std::string type;
	public:
			Animal();
			Animal(Animal const &other);
			virtual ~Animal();

			virtual void makeSound() const;
			std::string getType() const;
			
			Animal &operator=(Animal const &other);


};

	std::ostream &operator<<(std::ostream &out, Animal const &other);

#endif
