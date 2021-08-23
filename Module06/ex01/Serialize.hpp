#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
# include <ostream>
# include <string>
# include <iostream>

struct Data{
	int n;
	char c;
	std::string s;
};

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
