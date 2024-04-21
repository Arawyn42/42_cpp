/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:12:03 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 21:13:58 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		// Constructors
		MateriaSource();
		MateriaSource(const MateriaSource &toCopy);
		~MateriaSource();

		// Operators
		MateriaSource	&operator=(const MateriaSource &toCopy);

		// Members
		void			learnMateria(AMateria *materia);
		AMateria		*createMateria(const std::string &type);
		
	private:
		AMateria	*_materias[4];
		int			_learned;
};

#endif