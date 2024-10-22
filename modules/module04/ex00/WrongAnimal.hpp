/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:05:53 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:20:51 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <cstdlib>
# include <iostream>

class	WrongAnimal
{
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wrongAnimal);
		virtual ~WrongAnimal();

		// Operators
		WrongAnimal		&operator=(const WrongAnimal &wrongAnimal);
		
		// Getters and setters
		std::string	getType() const;

		// Members functions
		void		makeSound() const;

	protected:
		std::string	_type;
		
};


#endif