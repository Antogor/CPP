/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agend.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:02:56 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/25 12:06:20 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGEND_HPP
# define AGEND_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

class Agend 
{
	private:
			int index;
			std::string inf[11];
			
	public:
			Contact book[8];
			Agend();
			~Agend();
			void add(std::string fields[11]); //Fill the arry with objects contacs
			void search(int nb);
			void printInf(int i);
};
#endif
