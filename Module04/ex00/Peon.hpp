/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 12:54:28 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 13:10:55 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{
	private:
			Peon();
	public:
			Peon(std::string const &name);
			~Peon();
			Peon(Peon const &p);
			Peon &operator=(Peon const &p);
			void getPolymorphed() const;
};

#endif
