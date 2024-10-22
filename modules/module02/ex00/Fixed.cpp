/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:14:02 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 03:04:42 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Default constructor */
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Copy constructor */
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	
	*this = fixed;
}

/* Copy assignment operator overload */
Fixed &Fixed:: operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->setRawBits(fixed.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const value)
{
	this->_value = value;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits() member function called" << std::endl;
	return (this->_value);
}
