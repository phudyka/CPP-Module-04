/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:44:24 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/22 10:43:57 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(std::string const &type) {};
		~AMateria();
		std::string const	&getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif