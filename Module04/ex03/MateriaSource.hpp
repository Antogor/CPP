/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 17:02:28 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/02 17:11:51 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <string>
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
			int count;
			AMateria *source[4];
	public:
			MateriaSource();
			MateriaSource(MateriaSource const &other);
			virtual ~MateriaSource();
			
			MateriaSource &operator=(MateriaSource const &other);

			void learnMateria(AMateria *m);
			AMateria* createMateria(std::string const & type);

};

#endif
