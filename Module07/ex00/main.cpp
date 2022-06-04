/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 17:48:47 by agarzon-          #+#    #+#             */
/*   Updated: 2022/06/04 17:53:15 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
    int a = 2;
    int b = 3;

	std::cout << "Value of int A: "<< a << std::endl;
	std::cout << "Value of int B: "<< b << std::endl;
	std::cout << "SWAP A and B" << std::endl;
    ::swap( a, b );
    std::cout << "Value of a = " << a << ", value of b = " << b << std::endl;
    std::cout << "Value min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "Value max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << "-------------" << std::endl;
    
	std::string c = "chaine1";
    std::string d = "chaine2";
    
	std::cout << "Value of string C: "<< c << std::endl;
	std::cout << "Value of string D: "<< d << std::endl;
	std::cout << "SWAP C and D" << std::endl;
	::swap(c, d);
    std::cout << "Value of c = " << c << ", Value of d = " << d << std::endl;
    std::cout << "Value min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "Value max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
