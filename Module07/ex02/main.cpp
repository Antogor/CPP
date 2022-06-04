/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 17:48:47 by agarzon-          #+#    #+#             */
/*   Updated: 2022/06/04 19:02:03 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {
    
	std::cout <<"SETING FIRST ARRAY WITH VALUE 1"<< std::endl;
    Array<int> iArrayFirst(1);
    iArrayFirst[0] = 1;
    std::cout <<"First = " << iArrayFirst[0] << std::endl;
	
    std::cout <<"COPYING SECOND ARRAY WITH FIRST ARRY"<< std::endl;
    Array<int> iArraySecond = iArrayFirst;
    std::cout <<"Second = : " << iArraySecond[0] << std::endl;

    std::cout <<"CHANGE THE VALUE OF FIRST ARRAY TO 2"<< std::endl;
    iArrayFirst[0] = 2;
    std::cout <<"First = : " << iArrayFirst[0] << std::endl;
    std::cout <<"Second = : " << iArraySecond[0] << std::endl;

    std::cout <<"----------------------"<< std::endl;

    std::cout <<"Put some values out of limits"<< std::endl;
	try{
    	std::cout <<"WITH INDEX -1\n"<< std::endl;
		iArrayFirst[-1] = 2;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
    	std::cout <<"\nWITH INDEX OUT OF SIZE\n"<< std::endl;
		iArrayFirst[999] = 2;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

   	std::cout <<"\nCREATING DEFAULT ARRAY OF FLOATS"<< std::endl;
	Array<float> fArray(5);
	for (size_t i = 0; i < fArray.size(); i++){
		std::cout << fArray[i] << "f ";
	}
	std::cout << std::endl;
   	
	std::cout <<"\nCREATING DEFAULT ARRAY OF STRINGS"<< std::endl;
	Array<std::string> sArray(5);
	for (size_t i = 0; i < sArray.size(); i++){
		sArray[i] = "Strings";
	}
	for (size_t i = 0; i < sArray.size(); i++){
		std::cout << sArray[i] << std::endl;
	}

	return (0);
}
