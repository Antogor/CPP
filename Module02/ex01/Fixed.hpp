/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 10:31:53 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/24 11:35:44 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <ostream>
# include <cmath>

class Fixed
{	
	private:
			int value;
			static const int bits = 8;
	public:
			Fixed();
			Fixed(const Fixed &f);
			Fixed(const int n);
			Fixed(const float n);
			~Fixed();
			Fixed &operator=(const Fixed &f);
			int getRawBits(void) const;
			void setRawBits(int const raw);
			float toFloat(void) const;
			int toInt(void) const;
};
			std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif
