/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:24:09 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/04 17:20:09 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string s = "HI THIS BRAIN";
	std::string *ptr;
	std::string &ref = s;
	ptr = &s;
	std::cout << "with pointer: "<< *ptr << std::endl;
	std::cout << "with reference: "<< ref << std::endl;
	return (0);
}
