/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 16:12:36 by agarzon-          #+#    #+#             */
/*   Updated: 2020/07/31 16:29:09 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>


class Pony{
	private:
			std::string dialog;
	
	public:
			Pony();
			~Pony();
			void speak(std::string sentence);
};

#endif
