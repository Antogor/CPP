#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <ostream>
# include <string>
# include <iostream>

template <class T>
class Array
{
	private:
			T *_x;
			int _size;
		
	public:

			Array<T>():_size(0), _x(nullptr){};

			Array<T>(const uint size):_size(size){
				this->_x = new T[size];
			//	if (typeid(t) == typeid(uint)){
			//		x = new T[t];
			//	}
			//	else
			//		x = new T[2];
			};

			Array<T>(Array<T> const &other){
				*this = other;
			};

			virtual ~Array<T>(){};
			
			Array<T> &operator=(Array<T> const &other){
				//delete[] this->_x;
				this->_x = new T[1];
				for (size_t i = 0; i < 1; i++)
					this->_x[i] = other[i];
				return *this;
			};

			T	&operator[](const int idx) const
			{
				return this->_x[idx];
			}

};

#endif
