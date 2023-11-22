/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:39:23 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/22 16:16:57 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete(inventory[i]);
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
			delete (inventory[i]);
		for (int i = 0; i < 4; ++i)
		{
			if (rhs.inventory[i])
				inventory[i] = rhs.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0;i < 4; ++i)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return ;	
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use[target];
}