/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:12:19 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/25 19:19:24 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/******************************** Constructors ********************************/
ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
}

ScalarConverter::~ScalarConverter()
{
	
}


/********************************* Operators **********************************/
ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	return (*this);
}


/**************************** Setters and getters *****************************/
void	ScalarConverter::setType(type type)
{
	this->_type = type;
}

type	ScalarConverter::getType() const
{
	return (this->_type);
}

void	ScalarConverter::setC(char c)
{
	this->_c = c;
}

char	ScalarConverter::getC() const
{
	return (this->_c);
}

void	ScalarConverter::setI(int i)
{
	this->_i = i;
}

int		ScalarConverter::getI() const
{
	return (this->_i);
}

void	ScalarConverter::setF(float f)
{
	this->_f = f;
}

float	ScalarConverter::getF() const
{
	return (this->_f);
}

void	ScalarConverter::setD(double d)
{
	this->_d = d;
}

double	ScalarConverter::getD() const
{
	return (this->_d);
}


/********************************** Methods ***********************************/
void	ScalarConverter::findType(const std::string &str)
{
	if (str.length())
}

void	ScalarConverter::sToC(const std::string &str)
{
	int i = std::stoi(str);
	
	if (std::isprint(i))
		this->_c = i;
	else
		this->_c = -1;
}

bool	ScalarConverter::isLitteral(const std::string &str)
{
	if (!str.compare("nan") || !str.compare("nanf") \
		|| str.compare("+inf") || str.compare("+inff") \
		|| str.compare("-inf") || str.compare("-inff"))
		return (true);
	return (false);
}

void		ScalarConverter::convert(const std::string &str)
{
	
}