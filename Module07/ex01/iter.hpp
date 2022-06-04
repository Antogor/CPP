#ifndef ITER_HPP
# define ITER_HPP
# include <ostream>
# include <string>
# include <iostream>

template <typename T> void inc(T &t){
	t++;
}

template <typename T> void imp(T t){
	std::cout << t << std::endl;
}

template <typename P, typename L, typename F, typename T> void iter(P *p, L l, F (*f)(T t)){

	for (int i = 0; i < l; i++){
		f(p[i]);
	}
}

#endif
