/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 18:27:47 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 10:47:36 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD
# define SQUAD
# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
			int count;
			ISpaceMarine **units;
	public:
			Squad();
			~Squad();
			Squad(Squad const &s);

			Squad &operator=(Squad const &s);

			int getCount() const;
			ISpaceMarine *getUnit(int n) const;
			int push(ISpaceMarine *sm);
};

#endif
