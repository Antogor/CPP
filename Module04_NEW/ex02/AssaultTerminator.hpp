/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 18:21:58 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 18:24:22 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
			AssaultTerminator();
			AssaultTerminator(AssaultTerminator const &a);
			~AssaultTerminator();

			AssaultTerminator &operator=(AssaultTerminator const &a);

			ISpaceMarine *clone() const;
			void battleCry() const;
			void rangedAttack() const;
			void meleeAttack() const;
};

#endif
