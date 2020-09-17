/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 13:09:25 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/17 16:21:30 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
class ScavTrap: virtual public ClapTrap{

	private:
			ScavTrap();
			std::string challenges[5];
	public:
          	ScavTrap(std::string const &name);
          	~ScavTrap();
          	ScavTrap(const ScavTrap &s);
          	ScavTrap &operator=(const ScavTrap &s);
			void challengeNewcomer(void);
};


#endif
