#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <ostream>
# include <string>
# include <iostream>

template <class T> void swap (T &a, T &b){
	T tmp;
	tmp = b;
	b = a;
	a = tmp;
}

template <class T> T min (T a, T b){
	return a == b ? b : a < b ? a : b;
}

template <class T> T max (T a, T b){
	return a == b ? b : a < b ? b : a;
}

#endif
