/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:09:23 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/16 14:32:43 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "Wrong Cat";
	std::cout << this->type << " has just spawned" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	this->WrongCat::operator=(other);
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << this->type << " has disappeared..." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meuuuuh !" << std::endl;
}