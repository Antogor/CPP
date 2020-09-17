/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 16:05:52 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/17 18:03:39 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap{
	private:
			NinjaTrap();
	public:
			NinjaTrap(std::string const &name);
			virtual ~NinjaTrap();
			NinjaTrap(NinjaTrap const &n);
			NinjaTrap &operator=(NinjaTrap const &n);
			void ninjaShoebox(ClapTrap &c);
			void ninjaShoebox(FragTrap &f);
			void ninjaShoebox(NinjaTrap &n);
			void ninjaShoebox(ScavTrap &s);
};
#endif
