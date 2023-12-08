/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:26:59 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/08 16:27:14 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << this->_type << " has been constructed" << std::endl;
}

Ice::~Ice()
{
	std::cout << this->_type << " has been destroyed" << std::endl;
}

Ice::Ice(Ice const &ref) : AMateria(ref.getType())
{
	std::cout << this->_type << " has been cloned" << std::endl;
}

Ice &Ice::operator=(Ice const &ref)
{
	std::cout << "Assigned from " << ref.getType() << std::endl;
	return (*this);
}

Ice	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}