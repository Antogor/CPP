/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Change.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:07:33 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/18 10:24:31 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHANGE_HPP
# define CHANGE_HPP
# include <string>
# include <fstream>
# include <sstream>

class Change{
	private:
			std::string  tmp;
			std::string swapText(std::string line, std::string s1, std::string s2);
	public:
			Change();
			~Change();
			bool textRead(std::string filename, std::string s1, std::string s2);


};

#endif
