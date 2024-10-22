/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:10:37 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 21:11:42 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		// Constructors
		virtual ~IMateriaSource() {};

		// Members
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria	*createMateria(const std::string &type) = 0;
};

#endif