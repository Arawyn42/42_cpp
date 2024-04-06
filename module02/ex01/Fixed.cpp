/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:14:02 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 03:49:32 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*********************** Constructors and destructor ***********************/
/* Default constructor */
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Constructor which converts an integer into fixed point */
Fixed::Fixed(const int value) : _value(value << Fixed::_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

/* Constructor which converts a float into fixed point */
Fixed::Fixed(const float value) : _value(roundf(value * (1 << Fixed::_bits)))
{
	std::cout << "Float constructor called" << std::endl;
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


/*************************** Setters and getters ***************************/
void	Fixed::setRawBits(int const value)
{
	this->_value = value;
}

int		Fixed::getRawBits() const
{
	return (this->_value);
}


/***************************** Public methods ******************************/
int	Fixed::toInt() const
{
	return (this->_value / (1 << Fixed::_bits));
}

float	Fixed::toFloat() const
{
	return ((float)this->_value / (1 << Fixed::_bits));
}

/******************************* Functions *********************************/
/* Specifies the behavior of the << operator between ostream object and Fixed object */
std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return stream;
}
