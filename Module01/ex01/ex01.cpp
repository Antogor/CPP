/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:39:45 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/31 16:43:50 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
	std::string *panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}
