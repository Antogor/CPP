/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 17:48:47 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/10 16:03:56 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {

    int l = 5;
    int iarr[l];

    std::cout << "--- ARRAY OF INTS ---" << std::endl;  
    for(int i = 0; i < l; i++){
        iarr[i] = 1 + std::rand() % (l-1);
        std::cout << "Int stroed: " << iarr[i] << std::endl;
    }

    ::iter(iarr, l, inc);

    std::cout << "--- ARRAY AFTER INCREMENT ---" << std::endl;
    ::iter(iarr, l, imp);

    std::cout << "--- ARRAY OF CHARS ---" << std::endl;
    char charr[5] = {'a', 'b', 'c', 'd', 'e'};

    ::iter(charr, 5, imp);

    //std::cout << "--- ARRAY AFTER INCREMENT ---" << std::endl;
    //::iter(charr, 5, inc);
    //::iter(charr, 5, imp);
    return 0;
}