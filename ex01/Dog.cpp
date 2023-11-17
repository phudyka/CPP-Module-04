/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:43 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/17 11:57:44 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog"), brain(new Brain)
{
	std::cout << "Dog has been created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
	delete(brain);
}

Dog::Dog(Dog const &other) : Animal(other) {}

Dog &Dog::operator=(Dog const &other)
{
	this->Animal::operator=(other);
	return(*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOUF WOUF" << std::endl;
}