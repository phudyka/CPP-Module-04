/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:23:21 by phudyka           #+#    #+#             */
/*   Updated: 2023/12/08 11:20:24 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CURE_HPP
# define  CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string	_type;

	public:
		Cure();
		virtual ~Cure();
		Cure(Cure const &ref);
		Cure &operator=(Cure const &ref);
		virtual	Cure		*clone() const;
		virtual void		use(ICharacter &target);
};

#endif