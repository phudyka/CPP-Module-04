/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:44:21 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/22 10:31:34 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::~AMateria() {}

std::string const	&AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter &target)
{
	
}