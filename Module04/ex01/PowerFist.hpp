/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 13:52:02 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 16:33:39 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
			PowerFist();
			~PowerFist();
			PowerFist(PowerFist const &f);
			PowerFist &operator=(PowerFist const &f);
			void attack() const;                                                                  
};

#endif

