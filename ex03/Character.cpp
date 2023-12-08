/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:39:23 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/24 11:33:07 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "A Character named " << _name << " has been created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::~Character()
{
	std::cout << this->_name << " has been destroyed" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
	}
}

Character::Character(Character const &ref) : _name(ref.getName() + "_copy")
{
	for (int i = 0; i < 4; i++)
	{
		if ((ref._inventory)[i])
			(this->_inventory)[i] = (ref._inventory[i])->clone();
	}
	std::cout << _name << "has been cloned from" << ref._name << std::endl;
}

Character	&Character::operator=(Character const &ref)
{
	if (this != &ref)
	{
		for (int i = 0; i < 4; ++i)
			delete (_inventory[i]);
		for (int i = 0; i < 4; ++i)
		{
			if (ref._inventory[i])
				this->_inventory[i] = (ref._inventory)[i]->clone();
			else
				this->_inventory[i] = 0;
		}
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int i;

	i = 0;
	if (!m)
	{
		std::cout << this->_name << "failed to equip" << std::endl;
		return ;
	}
	while ((this->_inventory)[i] && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->_name << "can't equip more than 4 Materia" << std::endl;
		return ;
	}
	(this->_inventory)[i] = m;
	std::cout << this->_name << "equipped Materia" << m->getType() << " in slot " << i << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << this->_name << " failed to equip on slot " << idx << std::endl;
	else if (!(this->_inventory)[idx])
		std::cout << this->_name << " has nothing equipped at slot " << idx << std::endl;
	else
	{
		AMateria *ptr = (this->_inventory)[idx];
		std::cout << this->_name << " unequipped " << ptr->getType() << " at slot "<< idx << std::endl;
		(this->_inventory)[idx] = 0;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	std::string	name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->_inventory)[idx])
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	std::cout << name;
	((this->_inventory)[idx])->use(target);
}

AMateria	*Character::getMateria(int idx)
{
	return ((this->_inventory)[idx]);
}