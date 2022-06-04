/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 17:48:47 by agarzon-          #+#    #+#             */
/*   Updated: 2022/06/04 18:02:43 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {

    int l = 5;
    int iarr[l];

    std::cout << "--- CREATING ARRAY OF INTS ---" << std::endl;  
    for(int i = 0; i < l; i++){
        iarr[i] = 1 + std::rand() % (l-1);
        std::cout << "Int stored: " << iarr[i] << std::endl;
    }

    std::cout << "--- USING INCREMENT ARRAY FUNCTION ---" << std::endl;
    ::iter(iarr, l, inc<int>);

    std::cout << "--- ARRAY AFTER INCREMENT ---" << std::endl;
    ::iter(iarr, l, imp<int>);

    std::cout << "\n--- CREATING ARRAY OF CHARS ---" << std::endl;
    char charr[5] = {'a', 'b', 'c', 'd', 'e'};

    std::cout << "--- USING INCREMENT ARRAY FUNCTION ---" << std::endl;
    ::iter(charr, 5, imp<char>);

    std::cout << "--- ARRAY AFTER INCREMENT ---" << std::endl;
    ::iter(charr, 5, inc<char>);
    ::iter(charr, 5, imp<char>);
    return 0;
}
