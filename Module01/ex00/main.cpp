/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:22:12 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/31 16:36:30 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(){
	Pony *p;

	p = new Pony;
	p->speak("Hi human i'm on the Heap");
	delete p;

}

void ponyOnTheStack(){
	Pony p;

	p.speak("Hi human, now i'm on the Stack");
}

int main (void){
	
	std::cout << "|-----------------------------------------|" << std::endl;
	std::cout << "The pony is on the heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "|-----------------------------------------|" << std::endl;
	std::cout << "The pony is on the stack" << std::endl;
	ponyOnTheStack();
	std::cout << "|-----------------------------------------|" << std::endl;
	std::cout << "The pony is gone" << std::endl;
	return 0;
}
