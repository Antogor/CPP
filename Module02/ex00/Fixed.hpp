/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 10:31:53 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/24 11:01:15 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{	
	private:
			int value;
			static const int bits = 8;
	public:
			Fixed();
			~Fixed();
			Fixed(const Fixed &f);
			Fixed &operator=(const Fixed &f);
			int getRawBits(void) const;
			void setRawBits(int const raw);
};

#endif
