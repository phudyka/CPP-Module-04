/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:27 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/21 10:38:18 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal::AAnimal("Cat"), brain(new Brain) 
{
	std::cout << "Cat has been crated" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat has been destroyed" << std::endl;
	delete (brain);
}

Cat::Cat(Cat const &other) : AAnimal(other) {}

Cat &Cat::operator=(Cat const &other)
{
	this->AAnimal::operator=(other);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}