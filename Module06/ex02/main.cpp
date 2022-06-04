/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 17:48:47 by agarzon-          #+#    #+#             */
/*   Updated: 2022/06/04 17:33:34 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){

    Base *b;
    int c;

    c = 1 + std::rand() % (4-1);
    if (c == 1){
        b = new A;
    }
    else if(c == 2){
        b = new B;
    }
    else{
        b = new C;
    }

    return b;
}

void identify (Base *p){

	std::cout << "USING IDENTIFY FROM POINTER\n";
    if (dynamic_cast<A *>(p)){
        std::cout << "A" << std::endl;
    }
    else if (dynamic_cast<B *>(p)){
        std::cout << "B" << std::endl;
    }
    else if (dynamic_cast<C *>(p)){
        std::cout << "C" << std::endl;
    }
}

void identify (Base &p){
	std::cout << "USING IDENTIFY FROM REFERENCE\n";
	identify(&p);
}

int main(){

    Base *b;
    
    for(int i = 0; i < 5; i++){
        b = generate();
        std::cout << i + 1 << "º:\n";
        identify(b);
        std::cout << "----------" << std::endl;
        delete b;
    }

    std::cout << std::endl;

    for(int i = 0; i < 5; i++){
        b = generate();
        std::cout << i + 1 << "º:\n";
        identify(*b);
        std::cout << "----------" << std::endl;
        delete b;
    }
    return 0;
}
