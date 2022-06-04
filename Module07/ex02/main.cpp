/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 17:48:47 by agarzon-          #+#    #+#             */
/*   Updated: 2022/05/16 11:25:39 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {
   // int *a = new int();
   // std::cout << a[9] << std::endl;

    std::cout <<"SETING FIRST ARRAY WITH VALUE 1"<< std::endl;
    //Array<uint> *l = new Array<uint>(1);
    Array<std::string> l(1);
    l[0] = '1';
    std::cout <<"First = " << l[0] << std::endl;
	
    std::cout <<"COPYING SECOND ARRAY WITH FIRST ARRY"<< std::endl;
    //Array<uint> *j = new Array<uint>(*l);
    Array<std::string> j = l;
    std::cout <<"Second = : " << j[0] << std::endl;

    std::cout <<"CHANGE THE VALUE OF FIRST ARRAY TO 2"<< std::endl;
    l[0] = '2';
    std::cout <<"First = : " << l[0] << std::endl;
    std::cout <<"Second = : " << j[0] << std::endl;

}
