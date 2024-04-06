/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:14:02 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 16:12:51 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*********************** Constructors and destructor ***********************/
/* Default constructor */
Fixed::Fixed() : _value(0)
{
	
}

/* Constructor which converts an integer into fixed point */
Fixed::Fixed(const int value) : _value(value << Fixed::_bits)
{
	
}

/* Constructor which converts a float into fixed point */
Fixed::Fixed(const float value) : _value(roundf(value * (1 << Fixed::_bits)))
{
	
}

/* Copy constructor */
Fixed::Fixed(const Fixed &fixed)
{	
	*this = fixed;
}

/* Copy assignment operator overload constructor */
Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
}


/*************************** Operators overload ****************************/
/* Comparators */
bool	Fixed::operator>(const Fixed &fixed)
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed)
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed)
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed)
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed)
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed)
{
	return (this->getRawBits() != fixed.getRawBits());
}

/* Basic operators */
Fixed	Fixed::operator+(const Fixed &fixed)
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

/* Pre-increments and pre-decrements operators */
Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);
}

/* Post-increments and post-decrements operators */
Fixed	Fixed::operator++(int)
{
	Fixed	temp(this->toFloat());
	this->_value++;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(this->toFloat());
	this->_value--;
	return (temp);
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
	return (this->getRawBits() / (1 << Fixed::_bits));
}

float	Fixed::toFloat() const
{
	return ((float)this->getRawBits() / (1 << Fixed::_bits));
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}


/******************************* Functions *********************************/
/* Specifies the behavior of the << operator between ostream object and Fixed object */
std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return stream;
}
