/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:44:21 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/24 09:30:06 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Abstarct Materia has been created" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "Abstract Materia has been created" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Abstract Materia has been destroyed" << std::endl;
}

AMateria::AMateria(AMateria const &ref) : _type(ref._type)
{
	std::cout << "Abstract materia has been cloned" << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "AMateria used on :" << target.getName() << std::endl;
}