/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 14:37:59 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/12 17:19:51 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	error_exit(const std::string msg)
{
	std::cerr << msg << std::endl;
	exit(EXIT_FAILURE);
}

static int	ft_stoi(const std::string &str)
{
	int	res;
	std::stringstream s(str);
	s >> res;
	return (res);
}

static float	ft_stof(const std::string &str)
{
	float res;
	std::stringstream s(str);
	s >> res;
	return (res);
}

/******************************** Constructors ********************************/
BitcoinExchange::BitcoinExchange()
{
	std::ifstream	internalDB("data.csv", std::ifstream::in);
	if (!internalDB.is_open())
	{
		std::cerr << "Error: could not open internal database." << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string	line;
	size_t	comma;
	std::getline(internalDB, line);
	while (std::getline(internalDB, line))
	{
		comma = line.find(',');
		std::string	rate = line.substr(comma + 1);
		this->_database[line.substr(0, comma)] = ft_stof(rate);
	}
	internalDB.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
}

BitcoinExchange::~BitcoinExchange()
{
	
}

/********************************* Operators **********************************/
BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	return (*this);
}

/********************************** Members ***********************************/
bool	BitcoinExchange::isDateValid(const std::string &date)
{
	std::string			str;
	int					year, month, day;
	std::istringstream	s(date);
	
	if (date.empty())
	{
		std::cerr << "Error: empty date." << std::endl;
		return (false);
	}

	size_t	first = date.find('-');
	size_t	second = date.find('-', first + 1);
	if (first == std::string::npos || second == std::string::npos \
		|| date.find_first_not_of("0123456789.-") != std::string::npos)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return (false);
	}

	for (int i = 0 ; std::getline(s, str, '-') ; i++)
	{
		switch (i)
		{
		case 0:
			year = ft_stoi(str);
			if (year < 2009 || year > 2022)
			{
				std::cerr << "Error: bad input (year) => " << date << std::endl;
				return (false);
			}
			break;
		case 1:
			month = ft_stoi(str);
			if (month < 1 || month > 12)
			{
				std::cerr << "Error: bad input (month) => " << date << std::endl;
				return (false);
			}
			break;
		case 2:
			day = ft_stoi(str);
			if (day < 1 || day > 31 \
				|| (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)) \
				|| (day > 28 && month == 2 && year % 4 != 0) || (day > 29 && month == 2 && year % 4 == 0))
			{
				std::cerr << "Error: bad input (day) => " << date << std::endl;
				return (false);
			}
			break;
		case 3:
			std::cerr << "Error: bad input => " << date << std::endl;
			return (false);
		default:
			break;
		}
	}
	return (true);
}

bool	BitcoinExchange::isValueValid(const std::string &value)
{
	if (value.empty() || value.find_first_not_of("0123456789.-") != std::string::npos \
		|| value.at(0) == '.' || value.at(value.length() - 1) == '.')
	{
		std::cerr << "Error: invalid value." << std::endl;
		return (false);
	}
	else if (ft_stof(value) < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	else if (ft_stof(value) > 1000.0)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);		
}

float	BitcoinExchange::getRate(const std::string &date)
{
	std::map<std::string, float>::iterator	it = this->_database.lower_bound(date);
	
	if (it->first != date && it != this->_database.begin())
		it--;
	return (it->second);
}

void	BitcoinExchange::printResults(const char *input)
{
	std::ifstream	inputDB(input, std::iostream::in);
	if (!inputDB.is_open())
		error_exit("Error: cound not open file.");

	if (inputDB.peek() == std::ifstream::traits_type::eof())
		error_exit("Error: empty file.");
	
	std::string		line;
	
	std::getline(inputDB, line);
	while (std::getline(inputDB, line))
	{
		size_t	separator = line.find('|');
		if (separator == std::string::npos || line.length() < separator + 2)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		
		std::string	date = line.substr(0, separator - 1);
		if (!this->isDateValid(date))
			continue;
		
		std::string	sValue = line.substr(separator + 2);
		if (!this->isValueValid(sValue))
			continue;
		
		float		value = ft_stof(sValue);
		std::cout << date << " => " << value << " = " << std::setprecision(2)
				  << value * this->getRate(date) << std::endl;
	}
	
	inputDB.close();
}
