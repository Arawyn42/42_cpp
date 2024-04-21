/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:03:50 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:20:45 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal()
{
	*this = wrongCat;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

// Operators
WrongCat &WrongCat::operator=(const WrongCat &wrongCat)
{
	this->_type = wrongCat._type;
	std::cout << "WrongCat assignment operator called." << std::endl;
	return (*this);
}

// Member functions
void	WrongCat::makeSound() const
{
	std::cout << this->_type << ": *Miaow*." << std::endl;
}