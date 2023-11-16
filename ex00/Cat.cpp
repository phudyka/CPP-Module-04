/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:27 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/15 16:15:38 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {}

Cat::~Cat() {}

Cat::Cat(Cat const &other) : Animal(other) {}

Cat &Cat::operator=(Cat const &other)
{
	this->Animal::operator=(other);
	return(*this);
}

void	Cat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}