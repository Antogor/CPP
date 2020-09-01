/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 13:27:17 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 13:47:08 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>
# include <iostream>

class AWeapon
{
	private:
			AWeapon();
	protected:
			std::string name;
			int damage;
			int apcost;
	public:
			AWeapon(std::string const & name, int apcost, int damage);
			virtual ~AWeapon();
			AWeapon(AWeapon const &w);
			AWeapon &operator=(AWeapon const &w);
			std::string const &getName() const;
			int getAPCost() const;
			int getDamage() const;
			virtual void attack() const = 0;
};

#endif
