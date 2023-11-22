/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:12:53 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/22 10:48:10 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		IMateriaSource(/* args */);
		virtual 			~IMateriaSource() {};
		virtual void		learnMateria(AMateria *) = 0;
		virtual	AMateria	*createMateria(std::string const &type) = 0;
};

#endif