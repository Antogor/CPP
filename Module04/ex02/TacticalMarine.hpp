/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 17:56:59 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 18:03:28 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
	public:
			TacticalMarine();
			TacticalMarine(TacticalMarine const &m);
			~TacticalMarine();

			TacticalMarine &operator=(TacticalMarine const &m);

			ISpaceMarine *clone() const;
			void battleCry() const;
			void rangedAttack() const;
			void meleeAttack() const;
};

#endif
