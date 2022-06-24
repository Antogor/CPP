/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:00:23 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/01 17:39:15 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <ostream>
# include <iostream>
# include <algorithm>
# include <stack>
# include <list>

template < typename T >
class MutantStack : public std::stack<T>
{
	private:

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;


		MutantStack():std::stack<T>(){};
		MutantStack(MutantStack const &other) : std::stack<T>(other){};
		virtual ~MutantStack(){};

		iterator begin(){ return std::stack<T>::c.begin(); }
		iterator end(){ return std::stack<T>::c.end(); }

		const_iterator cbegin() const { return std::stack<T>::c.cbegin(); };
		const_iterator cend() const { return std::stack<T>::c.cend(); };

		reverse_iterator rbegin(){ return std::stack<T>::c.rbegin(); };
		reverse_iterator rend(){ return std::stack<T>::c.rend(); };

		const_reverse_iterator crbegin() const { return std::stack<T>::c.crbegin(); };
		const_reverse_iterator crend() const { return std::stack<T>::c.crend(); };
			
		MutantStack &operator=(MutantStack const &other)
		{
			std::stack<T>::operator=(other);
			return (*this);
		};
			

};

#endif
