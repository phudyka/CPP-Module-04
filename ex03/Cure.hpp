/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:23:21 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/22 10:37:49 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CURE_HPP
# define  CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		virtual	AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif