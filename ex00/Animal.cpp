/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:36 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/16 14:31:35 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Random Animal";
	std::cout << this->type << " has just spawned." << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << this->type << " has just spawned" << std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
}

Animal &Animal::operator=(Animal const &other)
{
	this->type = other.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << this->type << " has disapeared..." << std::endl;
}

std::string const &Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "* Loud Animal sound *" << std::endl;
}