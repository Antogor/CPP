/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:54:14 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/04 14:25:34 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"


class ZombieHorde{

	private:
			Zombie *horde;
			int n;
	public:
			ZombieHorde(int n);
			~ZombieHorde();
			void announce();


};


#endif
