/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 16:40:36 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/10 17:25:21 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <ostream>
# include <string>
# include <iostream>
# include <cctype>
# include <cstdlib>
# include <limits>
# include <cmath>

class Convert
{
	private:
			Convert();
			std::string _str;
			int 		_iValue;
			float 		_fValue;
			double 		_dValue;
			char 		_cValue;
			int 		_dot;
			std::string	_errors[4];
			int 		_nan;
	public:
			Convert(std::string const &s);
			Convert(Convert const &other);
			virtual ~Convert();
			
			Convert &operator=(Convert const &other);

			void convert(void);
			bool isAChar(std::string const &s) const;
			bool isAInt(std::string const &s) const;
			bool isAFloat(std::string const &s);
			bool isADouble(std::string const &s);

			int getInt(void) const;
			float getFloat(void) const;
			double getDouble(void) const;
			char getChar(void) const;
			std::string getStr(void) const;
			int getDot() const;
			int getNan() const;
};

	std::ostream &operator<<(std::ostream &out, Convert const &other);

#endif
