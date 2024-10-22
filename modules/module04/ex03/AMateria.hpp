/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:11:00 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 22:25:30 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <cstdlib>
# include <iostream>
# include "ICharacter.hpp"

# define END_COLOR	"\033[0m"
# define RED			"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BOLDBLUE	"\033[1m\033[34m"
# define MAGENTA		"\033[35m"
# define CYAN		"\033[36m"

class ICharacter;

class	AMateria
{
	public:
		// Constructors
		AMateria();
		AMateria(std::string const & type);
		virtual	~AMateria();

		// Setters and getters
		const std::string	&getType() const;		// Returns the materia type

		// Members
		virtual AMateria	*clone() const = 0;		// Pure virtual member = abstract class
		virtual void		use(ICharacter& target);

	protected:
		std::string	_type;
};



#endif