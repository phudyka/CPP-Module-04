/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:46:12 by phudyka           #+#    #+#             */
/*   Updated: 2023/11/17 10:54:19 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class	Brain
{
	private:
		std::string	*ideas;
	public:
		std::string	*getIdeas();
		Brain();
		Brain(Brain &ref);
		~Brain();

		Brain & operator=(Brain const &tab);
};

#endif