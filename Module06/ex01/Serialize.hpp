#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
# include <ostream>
# include <string>
# include <iostream>

class Serialize
{
	private:
	public:
			Serialize();
			virtual ~Serialize();

			uintptr_t serialize(Data *ptr);
			Data *deserialize(uintptr_t raw);

};

#endif
