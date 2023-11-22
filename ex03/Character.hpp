/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:39:22 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/22 16:19:07 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
		
	public:
		Character(std::string const &name);
		Character(Character const &src);
		virtual ~Character();
		Character &operator=(Character const &rhs);
		std::string const &getName() const;
		void equip(AMateria *m);void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif