#!/bin/bash/

MAYUS="$2_hpp"
INCLUDE='"'$2'.hpp"'

if [ $1 = "hpp" ]; then
	echo "#ifndef ${MAYUS^^}
# define ${MAYUS^^}
# include <ostream>
# include <string>
# include <iostream>

class $2
{
	private:
	public:
			$2();
			$2($2 const &other);
			virtual ~$2();
			
			$2 &operator=($2 const &other);


};

	std::ostream &operator<<(std::ostream &out, $2 const &other);

#endif" > $3/$2.hpp 

elif [ $1 = "cpp" ]; then
	echo "#include $INCLUDE

$2::$2(){

}

$2::~$2(){

}

$2::$2($2 const &other){

}

$2 &$2::operator=($2 const &other){

	return *this;
}


std::ostream &operator<<(std::ostream &out, $2 const &other){

	return out;
}

" > $3/$2.cpp

else
	echo "Invalid command"
fi
