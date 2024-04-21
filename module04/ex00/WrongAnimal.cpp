/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:07:12 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:08:03 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	*this = wrongAnimal;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

// Operators
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	this->_type = wrongAnimal._type;
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	return (*this);
}

// Getters and setters
std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

// Member functions
void	WrongAnimal::makeSound() const
{
	std::cout << this->_type << ": *Makes a sound*." << std::endl;
}
