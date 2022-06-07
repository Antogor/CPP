#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <exception>
# include <map>
# include <vector>
# include <list>
# include <iostream>
# include <iterator>



class NotFoundException: public std::exception{
	public:
		virtual const char * what() const throw(){
			return "NotFoundException: Number not found in container";
		}
	
};

template <template <typename, typename> class  T>
int easyfind(T<int, std::allocator<int>> &container, int n){
		
		typename T<int, std::allocator<int>>::iterator it;
		
		for (it = container.begin(); it != container.end(); it++){
			if (*it == n)
				return *it;
		}
		throw NotFoundException();
}

#endif
