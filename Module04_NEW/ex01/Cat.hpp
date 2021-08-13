#ifndef CAT_HPP
# define CAT_HPP
# include <ostream>
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
			Brain* brain;
	public:
			Cat();
			Cat(Cat const &other);
			virtual ~Cat();

			void makeSound() const;
			
			Cat &operator=(Cat const &other);


};

	std::ostream &operator<<(std::ostream &out, Cat const &other);

#endif
