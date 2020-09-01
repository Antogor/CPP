/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 14:06:47 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/01 14:28:46 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>
# include <iostream>

class Enemy
{
	private:
			Enemy();
	protected:
			int hp;
			std::string type;
	public:
			Enemy(int hp, std::string const & type);
			virtual ~Enemy();
			Enemy(Enemy const &e);
			Enemy &operator=(Enemy const &e);
			std::string const &getType() const;
			int getHP() const;
			virtual void takeDamage(int damage);
};

#endif
