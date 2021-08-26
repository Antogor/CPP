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
				x = new T[2];
			};
			Array(T t){
				if (typeid(t) == typeid(uint)){
					x = new T[t];
				}
				else
					x = new T[2];
			};
			Array(Array const &other){
				this->x = other.x;
			};

			virtual ~Array(){};
			
			Array &operator=(Array const &other){
				this->x = other.x;
				return this;
			};

};

#endif
