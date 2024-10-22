/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:36:02 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:38:07 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &cat) : Animal()
{
	this->_type = cat._type;
	this->brain = new Brain();
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called." << std::endl;
}

// Operators
Cat &Cat::operator=(const Cat &cat)
{
	this->_type = cat._type;
	this->brain = new Brain();
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

// Member functions
void	Cat::makeSound() const
{
	std::cout << this->_type << ": *Miaow*." << std::endl;
}
