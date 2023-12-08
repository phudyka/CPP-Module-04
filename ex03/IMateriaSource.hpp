/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:12:53 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/08 15:49:22 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	AMateria	*createMateria(std::string const &type) = 0;
		virtual void		learnMateria(AMateria *m) = 0;
		virtual 			~IMateriaSource() {};
};

#endif