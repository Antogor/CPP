/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:23:49 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/18 17:11:06 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Change.hpp"

int main(int argc, char **argv){

	Change c;
	if (argc == 4){
		if (c.textRead(argv[1], argv[2], argv[3]))
			std::cout << "The text has been replaced" << std::endl;
	}
	else{
		std::cout << "Invalid argument" << std::endl;
		std::cout << "I need 3 arguments: ";
		std::cout << "File name, word to replace, and the new word to save" << std::endl;
	}
	return 0;
}
