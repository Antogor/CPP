#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <exception>
# include <map>
# include <vector>
# include <list>
# include <iostream>
# include <iterator>
# include <algorithm>


class NotFoundException: public std::exception{
	public:
		virtual const char * what() const throw(){
			return "NotFoundException: Number not found in container";
		}
	
};

template <template <typename, typename> class  T>
typename T<int, std::allocator<int>>::iterator 
easyfind(T<int, std::allocator<int>> &container, int n){
		
		typename T<int, std::allocator<int>>::iterator it;
		
		it = std::find(container.begin(), container.end(), n);
		if (it != container.end())
			return it;
		throw NotFoundException();
}

#endif
