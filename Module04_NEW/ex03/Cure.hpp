/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 14:55:00 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 17:33:49 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <string>
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	public:
			Cure();
			Cure(Cure const &other);
			virtual ~Cure();
			
			Cure &operator=(Cure const &other);

			AMateria *clone() const;
			void use(ICharacter& target);
};

#endif
