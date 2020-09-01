/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:22:53 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 16:31:18 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
			RadScorpion();
			~RadScorpion();
			RadScorpion(RadScorpion const &rad);
			RadScorpion &operator=(RadScorpion const &rad);
};

#endif
