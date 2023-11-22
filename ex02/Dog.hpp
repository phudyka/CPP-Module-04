/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:57 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/21 10:36:34 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "AAnimal.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(Dog const &other);
		~Dog();

		Dog &operator=(Dog const &other);
	
		void	makeSound() const;
};

#endif
