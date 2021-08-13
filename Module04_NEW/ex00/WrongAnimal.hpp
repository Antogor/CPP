#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <ostream>
# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
			std::string type;
	public:
			WrongAnimal();
			WrongAnimal(WrongAnimal const &other);
			virtual ~WrongAnimal();

			virtual void makeSound() const;
			std::string getType() const;
			
			WrongAnimal &operator=(WrongAnimal const &other);


};

	std::ostream &operator<<(std::ostream &out, WrongAnimal const &other);

#endif
