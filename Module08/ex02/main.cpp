/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:00:32 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/01 17:53:33 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(){
	std::cout << "--------MutantStack--------:" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "First Mutanstack number: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Mutanstack size after pop: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Mutanstack total size: " << mstack.size() << std::endl;
	
	std::cout << "\nCREATING STACK FROM MUTANTSTACK:" << std::endl;
	std::stack<int> s(mstack);
	std::cout << "42 number added to stack" << std::endl;
	s.push(42);
	std::cout << "Stack size: " << s.size() << std::endl;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	std::cout << "\nITERATOR:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << "\nCONST_ITERATOR:" << std::endl;
	MutantStack<int>::const_iterator cit = mstack.cbegin();
	MutantStack<int>::const_iterator cite = mstack.cend();
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
	
	std::cout << "\nREVERSE_ITERATOR:" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	
	std::cout << "\nCONST_REVERSE_ITERATOR:" << std::endl;
	MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.crend();
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		++crit;
	}
	
	std::cout << "\n--------LIST--------:" << std::endl;
	std::list<int> mslist;
	mslist.push_back(5);
	mslist.push_back(3);
	mslist.push_back(5);
	mslist.push_back(737);
	mslist.push_back(0);
	
	std::cout << "List total size: " << mslist.size() << std::endl;
	
	std::list<int>::iterator lit = mslist.begin();
	std::list<int>::iterator lite = mslist.end();
	
	++lit;
	--lit;
	
	std::cout << "\nLIST ITERATOR:" << std::endl;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	
	std::cout << "\nLIST CONST_ITERATOR:" << std::endl;
	std::list<int>::const_iterator clit = mslist.cbegin();
	std::list<int>::const_iterator clite = mslist.cend();
	while (clit != clite)
	{
		std::cout << *clit << std::endl;
		++clit;
	}
	
	std::cout << "\nLIST REVERSE_ITERATOR:" << std::endl;
	std::list<int>::reverse_iterator rlit = mslist.rbegin();
	std::list<int>::reverse_iterator rlite = mslist.rend();
	while (rlit != rlite)
	{
		std::cout << *rlit << std::endl;
		++rlit;
	}
	
	std::cout << "\nLIST CONST_REVERSE_ITERATOR:" << std::endl;
	std::list<int>::const_reverse_iterator crlit = mslist.crbegin();
	std::list<int>::const_reverse_iterator crlite = mslist.crend();
	while (crlit != crlite)
	{
		std::cout << *crlit << std::endl;
		++crlit;
	}
	return 0;
}
