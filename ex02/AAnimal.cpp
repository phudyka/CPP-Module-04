/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:27:55 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/21 10:29:06 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "Random AAnimal";
	std::cout << this->type << " has just spawned." << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << this->type << " has just spawned" << std::endl;
}

AAnimal::AAnimal(AAnimal const &other)
{
	*this = other;
}

AAnimal &AAnimal::operator=(AAnimal const &other)
{
	this->type = other.getType();
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << this->type << " has disapeared..." << std::endl;
}

std::string const &AAnimal::getType() const
{
	return (this->type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "* Loud AAnimal sound *" << std::endl;
}