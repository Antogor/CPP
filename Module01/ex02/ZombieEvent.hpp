/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:51:44 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/18 17:47:02 by agarzon-         ###   ########.fr       */
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
	public:
			ZombieEvent();
			virtual ~ZombieEvent();
			void setZombieType(std::string type);
			Zombie *newZombie(std::string name);
			Zombie *randomChump();
};

#endif
