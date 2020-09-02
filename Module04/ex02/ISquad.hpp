/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 17:46:21 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 17:52:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include "ISpaceMarine.hpp"

class ISquad
{
	public:
			virtual ~ISquad() {}
			virtual int getCount() const = 0;
			virtual ISpaceMarine* getUnit(int) const = 0;
			virtual int push(ISpaceMarine*) = 0;
};

#endif
