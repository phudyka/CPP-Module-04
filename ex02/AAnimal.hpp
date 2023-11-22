/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:48 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/21 10:35:29 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <string>
#include <iostream>

class	AAnimal 
{
	protected:
	std::string	type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const &other);
		virtual	~AAnimal();

		AAnimal &operator=(AAnimal const &other);
		
		std::string const &getType() const;
		virtual void makeSound() const = 0;
		
};

#endif