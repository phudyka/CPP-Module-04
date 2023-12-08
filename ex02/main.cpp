/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:59:14 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/08 15:36:54 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const int arraySize = 10;
    AAnimal* animalArray[arraySize];

    for (int i = 0; i < arraySize; ++i)
    {
        if (i < arraySize / 2)
            animalArray[i] = new Dog();
        else
            animalArray[i] = new Cat();
    }
    for (int i = 0; i < arraySize; ++i)
        delete animalArray[i];

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    const WrongAnimal* wrongJ = new WrongCat();
    const WrongAnimal* wrongMeta = new WrongAnimal();

    delete j;
    delete i;
    delete wrongJ;
    delete wrongMeta;

	system("leaks Classe_abstraite");
    return (0);
}