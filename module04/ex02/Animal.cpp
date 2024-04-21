/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:15:57 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 20:04:19 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

// Operators
Animal &Animal::operator=(const Animal &animal)
{
	this->_type = animal._type;
	std::cout << "Animal assignment operator called." << std::endl;
	return (*this);
}

// Getters and setters
std::string	Animal::getType() const
{
	return (this->_type);
}
