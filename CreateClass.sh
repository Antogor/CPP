#!/bin/bash
COMAND=$1
CLASS_NAME=$2
MAYUS="${CLASS_NAME}_hpp"
INCLUDE='"'$CLASS_NAME'.hpp"'

if [ $COMAND = "create" ]; then
	echo "#ifndef ${MAYUS^^}
# define ${MAYUS^^}
# include <ostream>
# include <string>
# include <iostream>

class $CLASS_NAME
{
	private:
	public:
			$CLASS_NAME();
			$CLASS_NAME($CLASS_NAME const &other);
			virtual ~$CLASS_NAME();
			
			$CLASS_NAME &operator=($CLASS_NAME const &other);


};

	std::ostream &operator<<(std::ostream &out, $CLASS_NAME const &other);

#endif" > $3/$CLASS_NAME.hpp 

	echo "#include $INCLUDE

$CLASS_NAME::$CLASS_NAME(){

}

$CLASS_NAME::~$CLASS_NAME(){

}

$CLASS_NAME::$CLASS_NAME($CLASS_NAME const &other){

}

$CLASS_NAME &$CLASS_NAME::operator=($CLASS_NAME const &other){

	return *this;
}


std::ostream &operator<<(std::ostream &out, $CLASS_NAME const &other){

	return out;
}

" > $3/$CLASS_NAME.cpp

else
	echo "Invalid command"
fi
