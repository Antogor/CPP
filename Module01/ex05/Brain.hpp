/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:35:12 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/07 13:07:08 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <sstream>

class Brain{

	private:
			int neurons;
	public:
			Brain();
			~Brain();
			int getNeurons();
			void setNeurons(int n);
			std::string identify() const;
};

#endif
