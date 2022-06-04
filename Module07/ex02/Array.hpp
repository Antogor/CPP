#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <ostream>
# include <string>
# include <iostream>

template <typename T>
class Array
{
	private:
			T *_x;
			size_t _size;
		
	public:

			Array<T>(){
				this->_size = 0;
				this->_x = nullptr;
			};

			Array<T>(const uint size):_size(size){
				this->_x = new T[size]();
			};

			Array<T>(Array<T> const &other){
				if (other._size > 0){
					this->_x = new T[other._size];
					for (size_t i = 0; i < other._size; i++)
						this->_x[i] = other._x[i];
				}
				this->_size = other._size;
			};

			virtual ~Array<T>(){
				if (this->_size > 0)
					delete[] this->_x;
			};
		
			class OutOfBoundsException: public std::exception{
				public:
					virtual const char *what() const throw(){
						return "ArrayException: index out of bounds";
					}
			};
			
			Array<T> &operator=(Array<T> const &other){
				if (this->_size > 0)
					delete[] this->_x;
				
				if (other._size > 0){
					this->_x = new T[other._size];
					for (size_t i = 0; i < other._size; i++)
						this->_x[i] = other._x[i];
				}
				this->_size = other._size;
				return *this;
			};

			T &operator[](const size_t idx) const{
				if (idx >= this->_size)
					throw OutOfBoundsException();
				return this->_x[idx];
			}

			size_t size(void) const{
				return this->_size;
			}

};

#endif
