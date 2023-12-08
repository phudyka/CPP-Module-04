/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:59:14 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/08 15:36:14 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " ";
    j->makeSound(); 
    std::cout << i->getType() << " ";
    i->makeSound();
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongJ = new WrongCat();
    std::cout << wrongJ->getType() << " ";
    wrongJ->makeSound(); 
    std::cout << wrongMeta->getType() << " ";
    wrongMeta->makeSound(); 
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongJ;

	system("leaks Polymorphisme");

    return 0;
}