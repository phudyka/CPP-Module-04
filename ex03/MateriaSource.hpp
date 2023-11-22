/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:51:00 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/22 10:54:09 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*source[4];
	public:
		MateriaSource();
		virtual 	~MateriaSource();
		void		learnMatera(AMateria *m);
		AMateria	*createMateria(std::string const *type);
};

#endif