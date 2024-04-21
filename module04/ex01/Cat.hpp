/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:32:54 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:33:32 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &cat);
		~Cat();

		// Operators
		Cat		&operator=(const Cat &cat);

		// Members
		void	makeSound() const;

	private:
		Brain	*brain;
};

#endif