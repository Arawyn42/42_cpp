/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:41:41 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:36:41 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &dog) : Animal()
{
	this->_type = dog._type;
	this->brain = new Brain();
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called." << std::endl;
}

// Operators
Dog &Dog::operator=(const Dog &dog)
{
	this->_type = dog._type;
	this->brain = new Brain();
	std::cout << "Dog assignment operator called." << std::endl;
	return (*this);
}

// Member functions
void	Dog::makeSound() const
{
	std::cout << this->_type << ": *Waf*." << std::endl;
}
