/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:55:54 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/17 19:14:37 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanA{
	private:
			const Weapon &weapon;
			std::string name;
	public:
			HumanA(std::string name, Weapon const &weapon);
			~HumanA();
			void attack() const;

};

#endif
