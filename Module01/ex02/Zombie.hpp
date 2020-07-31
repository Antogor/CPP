/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:45:20 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/31 17:45:26 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	private:
			std::string type;
			std::string name;
	public:
			Zombie(std::string n, std::string t);
			~Zombie();
			void announce();

};

#endif
