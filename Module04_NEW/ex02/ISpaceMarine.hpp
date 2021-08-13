/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 17:50:37 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 17:52:28 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:
			virtual ~ISpaceMarine() {}
			virtual ISpaceMarine* clone() const = 0;
			virtual void battleCry() const = 0;
			virtual void rangedAttack() const = 0;
			virtual void meleeAttack() const = 0;
};

#endif
