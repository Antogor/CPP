/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:19:26 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 16:31:43 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
			SuperMutant();
			~SuperMutant();
			SuperMutant(SuperMutant const &sup);
			SuperMutant &operator=(SuperMutant const &sup);
			void takeDamage(int damage);
};

#endif
