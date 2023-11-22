/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:46:23 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/17 11:46:28 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "a good idea";
	std::cout << "Brain is full of good ideas" << std::endl;
}

Brain::Brain(Brain &ref)
{
	std::string	*id_ref;

	id_ref = ref.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = id_ref[i] + "stolen";
	std::cout << "An other brain has stolen all the good ideas !" << std::endl;
}

Brain & Brain::operator=(Brain const &tab)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = tab.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	delete[] (this->ideas);
	std::cout << "Brain has been purged and destroyed" << std::endl;
}

std::string	*Brain::getIdeas()
{
	return (this->ideas);
}
