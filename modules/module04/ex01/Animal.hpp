/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:16:29 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:31:36 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <cstdlib>
# include <iostream>
# include "Brain.hpp"

class	Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &animal);
		virtual ~Animal();

		// Operators
		Animal		&operator=(const Animal &animal);
		
		// Getters and setters
		std::string	getType() const;

		// Members functions
		virtual void		makeSound() const;

	protected:
		std::string	_type;
		
};


#endif