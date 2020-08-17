/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:42:10 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/17 19:18:48 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {
	private:
			std::string type;
	public:
			Weapon();
			Weapon(std::string type);
			~Weapon();
			std::string const &getType() const;
			void setType(std::string type);

};

#endif
