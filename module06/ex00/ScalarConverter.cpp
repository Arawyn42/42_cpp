/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:12:19 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/06 17:24:05 by drenassi         ###   ########.fr       */
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


/********************************** Methods ***********************************/
bool	ScalarConverter::_isLiteral(const std::string &str)
{
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf") \
		|| !str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return (true);
	return (false);
}

bool	ScalarConverter::_isChar(const std::string &str)
{
	if (str.length() != 1)
		return (false);
	if (str.at(0) < std::numeric_limits<char>::min() || str.at(0) > std::numeric_limits<char>::max())
		return (false);
	if (std::isdigit(str.at(0)))
		return (false);
	return (true);
}

bool	ScalarConverter::_isInt(const std::string &str)
{
	for (size_t i = ((str.at(0) == '-' || str.at(0) == '+') ? 1 : 0) ; i < str.length() ; i++)
		if (!std::isdigit(str.at(i)))
			return (false);
	return (true);
}

bool	ScalarConverter::_isFloat(const std::string &str)
{
	bool	isDot = false;
	
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return (true);
	if (str.at(str.length() - 1) != 'f')
		return (false);
	for (size_t i = ((str.at(0) == '-' || str.at(0) == '+') ? 1 : 0) ; i < str.length() - 1 ; i++)
	{
		if (str.at(i) == '.')
		{
			if (isDot)
				return (false);
			isDot = true;
		}
		else if (!std::isdigit(str.at(i)))
			return (false);
	}
	if (!isDot)
		return (false);
	return (true);
}

bool	ScalarConverter::_isDouble(const std::string &str)
{
	bool	isDot = false;
	
	if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return (true);
	for (size_t i = ((str.at(0) == '-' || str.at(0) == '+') ? 1 : 0) ; i < str.length() ; i++)
	{
		if (str.at(i) == '.')
		{
			if (isDot)
				return (false);
			isDot = true;
		}
		else if (!std::isdigit(str.at(i)))
			return (false);
	}
	if (!isDot)
		return (false);
	return (true);
}

void	ScalarConverter::_printType(const std::string &str)
{
	if (_isChar(str))
		std::cout << GREEN << "type detected: char" << END_COLOR << std::endl;
	else if (_isInt(str))
		std::cout << GREEN << "type detected: int" << END_COLOR << std::endl;
	else if (_isFloat(str))
		std::cout << GREEN << "type detected: float" << END_COLOR << std::endl;
	else if (_isDouble(str))
		std::cout << GREEN << "type detected: double" << END_COLOR << std::endl;
	else
		std::cout << RED << "type detected: unknown" << END_COLOR << std::endl;
}

void	ScalarConverter::_printChar(const std::string &str)
{
	double	c;

	std::istringstream(str) >> c;
	if (c < CHAR_MIN || c > CHAR_MAX || _isLiteral(str))
		std::cout << "char: impossible" << std::endl;
	else if (_isChar(str))
		std::cout << "char: " << str << std::endl;
	else if (!std::isprint(static_cast<char>(c)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	
}

void	ScalarConverter::_printInt(const std::string &str)
{
	double	i;

	std::istringstream(str) >> i;
	if (i < INT_MIN || i > INT_MAX || _isLiteral(str))
		std::cout << "int: impossible" << std::endl;
	else if (_isChar(str))
		std::cout << "int: " << static_cast<int>(str.at(0)) << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;
}

void	ScalarConverter::_printFloat(const std::string &str)
{
	double	f;

	std::istringstream(str) >> f;
	if (_isLiteral(str) && !str.substr(str.length() - 1).compare("f"))
		std::cout << "float: " << str << std::endl;
	else if (_isLiteral(str) && str.substr(str.length() - 1).compare("f"))
		std::cout << "float: " << str << "f"  << std::endl;
	else if (_isChar(str))
		std::cout << "float: " << static_cast<float>(str.at(0)) << ".0f" << std::endl;
	else if (f < -std::numeric_limits<float>::infinity() || f > std::numeric_limits<float>::infinity())
		std::cout << "float: impossible : " << INT_MIN << " < " << std::numeric_limits<float>::min() << std::endl;
	else if (f == (int)f)
		std::cout << "float: " << static_cast<float>(f) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
	
}

void	ScalarConverter::_printDouble(const std::string &str)
{
	double	d;

	std::istringstream(str) >> d;
	if (_isLiteral(str) && !str.substr(str.length() - 1).compare("f"))
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
	else if (_isLiteral(str) && str.substr(str.length() - 1).compare("f"))
		std::cout << "double: " << str << std::endl;
	else if (_isChar(str))
		std::cout << "double: " << static_cast<double>(str.at(0)) << ".0" << std::endl;
	else if (d < -std::numeric_limits<double>::infinity() || d > std::numeric_limits<double>::infinity())
		std::cout << "double: impossible" << std::endl;
	else if (d == (int)d)
		std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(d) << std::endl;
}




void		ScalarConverter::convert(const std::string &str)
{
	_printType(str);
	if (!_isChar(str) && !_isInt(str) && !_isFloat(str) && !_isDouble(str))
		return ;
	_printChar(str);
	_printInt(str);
	_printFloat(str);
	_printDouble(str);
}