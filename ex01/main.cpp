/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:59:14 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/17 11:52:43 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const int arraySize = 10;
    Animal* animalArray[arraySize];

    for (int i = 0; i < arraySize; ++i)
    {
        if (i < arraySize / 2)
            animalArray[i] = new Dog();
        else
            animalArray[i] = new Cat();
    }
    for (int i = 0; i < arraySize; ++i)
        delete animalArray[i];

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongJ = new WrongCat();
    const WrongAnimal* wrongMeta = new WrongAnimal();

    delete j;
    delete i;
    delete wrongJ;
    delete wrongMeta;

	system("leaks Je_ne_veux_pas_brûler_le_monde");
    return (0);
}