/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:20:56 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/16 14:32:18 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Wrong Animal";
	std::cout << this->type << " has just spawned." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << this->type << " has just spawned" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	this->type = other.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " has disapeared..." << std::endl;
}

std::string const &WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* Wrong Animal sound *" << std::endl;
}