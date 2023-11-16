/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:48 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/15 16:07:13 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
	std::string	type;

	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &other);
		virtual	~Animal();

		Animal &operator=(Animal const &other);
		
		std::string const &getType() const;
		virtual void makeSound() const;
		
};

#endif