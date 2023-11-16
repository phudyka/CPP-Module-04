/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:43 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/15 16:15:31 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {}

Dog::~Dog() {}

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