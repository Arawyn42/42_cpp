/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 14:38:15 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/12 16:54:56 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>

class BitcoinExchange
{
	public:
		/* Constructors */
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &toCopy);
		~BitcoinExchange();

		/* Operators */
		BitcoinExchange	&operator=(const BitcoinExchange &toCopy);

		/* Members */
		bool	isDateValid(const std::string &date);
		bool	isValueValid(const std::string &value);
		float	getRate(const std::string &date);
		void	printResults(const char *input);

	private:
		std::map<std::string, float> _database;		
};

void	error_exit(const std::string msg);