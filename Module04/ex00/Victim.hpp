/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 12:36:34 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 12:59:17 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <ostream>
# include <string>
# include <iostream>

class Victim
{
	private:
			Victim();
	protected:
			std::string name;
	public:
			Victim(std::string const &name);
			virtual ~Victim();
			Victim(Victim const &v);
			Victim &operator=(Victim const &v);
			std::string getName() const;
			virtual void getPolymorphed() const;
};

	std::ostream &operator<<(std::ostream &out, Victim const &v);

#endif
