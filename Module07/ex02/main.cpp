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

#include "Array.hpp"

int main( void ) {
   // int *a = new int();
   // std::cout << a[9] << std::endl;

    Array<uint> *l = new Array<uint>(1);
    //Array<uint> *j = new Array<uint>;
    l->x[0] = 'c';
    //j = l;
    Array<uint> *j = new Array<uint>(*l);
    std::cout << j->x[0] << std::endl;
    std::cout << l << std::endl;
    std::cout << j << std::endl;
    l->x[0] = 2;
    std::cout << j->x[0] << std::endl;

}