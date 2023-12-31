/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:06:52 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/21 10:36:36 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(Cat const &other);
		~Cat();

		Cat &operator=(Cat const &other);
	
		void	makeSound() const;
};

#endif