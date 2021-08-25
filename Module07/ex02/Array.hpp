#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <ostream>
# include <string>
# include <iostream>

template <class T>
class Array
{
	private:
		
	public:
			T *x;

			Array(){
				x = new T[5];
			};
			Array(T t){
				x = new T[t];
			};
			Array(Array const &other);

			virtual ~Array(){};
			
			Array &operator=(Array const &other);

};

#endif
