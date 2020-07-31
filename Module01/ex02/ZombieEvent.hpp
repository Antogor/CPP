/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:51:44 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/31 18:07:10 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <string>
# include <iostream>

class ZombieEvent
{
	private:
			std::string type;
			std::string randomName(std::string::size_type len);
	public:
			ZombieEvent();
			~ZombieEvent();
			void setZombieType(std::string type);
			Zombie *newZombie(std::string name);
			Zombie *randomChump();
};

#endif
