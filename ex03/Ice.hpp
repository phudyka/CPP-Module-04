/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:23:24 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/08 11:20:20 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string	_type;
	public:
		Ice();
		virtual ~Ice();
		Ice(Ice const &ref);
		Ice &operator=(Ice const &ref);
		virtual	Ice			*clone() const;
		virtual void		use(ICharacter &target);
};

#endif