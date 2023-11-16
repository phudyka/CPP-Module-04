/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:59:14 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/16 14:35:03 by phudyka          ###   ########.fr       */
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
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
return 0;
}

// int main()
// {
// 	{
// 		const Animal *meta = new Animal();
// 		const Animal *dog = new Dog();
// 		const Animal *cat = new Cat();
// 		const WrongAnimal *wrong = new WrongCat();
// 		meta->makeSound();
// 		std::cout << dog->getType() << std::endl;
// 		dog->makeSound();
// 		std::cout << cat->getType() << std::endl;
// 		cat->makeSound();
// 		wrong->makeSound();
	
// 		delete (meta);
// 		delete (cat);
// 		delete (dog);
// 		delete (wrong);
// 	}
// 	system("leaks Polymorphisme");
// 	return (0);
// }