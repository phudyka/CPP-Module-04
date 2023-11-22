/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:43 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/21 10:38:13 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal::AAnimal("Dog"), brain(new Brain)
{
	std::cout << "Dog has been created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
	delete (brain);
}

Dog::Dog(Dog const &other) : AAnimal(other) {}

Dog &Dog::operator=(Dog const &other)
{
	this->AAnimal::operator=(other);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOUF WOUF" << std::endl;
}