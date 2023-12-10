/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:44:24 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/10 14:52:06 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		const std::string	_type;

	public:
		AMateria();
		AMateria(std::string const &_type);
		virtual ~AMateria();
		//AMateria & AMateria::operator=(AMateria const & ref);
		AMateria(AMateria const &ref);
		virtual std::string const	&getType() const;
		virtual AMateria*			clone() const = 0;
		virtual void				use(ICharacter &target);
};

#endif