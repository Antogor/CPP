#ifndef ITER_HPP
# define ITER_HPP
# include <ostream>
# include <string>
# include <iostream>

template <class T> void inc(T &t){
	t++;
}

template <class T> void imp(T t){
	std::cout << t << std::endl;
}

template <class P, class L, class F, class T> void iter(P *p, L l, F (*f)(T t)){

	for (int i = 0; i < l; i++){
		f(p[i]);
	}
}

#endif
