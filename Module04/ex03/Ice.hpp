/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 13:59:21 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 14:02:09 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <string>
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
	public:
			Ice();
			Ice(Ice const &other);
			virtual ~Ice();
			
			Ice &operator=(Ice const &other);

			AMateria *clone() const;
			void use(ICharacter& target);
};

#endif
