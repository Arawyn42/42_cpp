/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:12:10 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/28 17:40:11 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <cstdlib>
# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <climits>
# include <cfloat>

# define END_COLOR	"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"

class ScalarConverter
{
	public:
		static void		convert(const std::string &str);
		

	private:
		/* Constructors */
		ScalarConverter();
		ScalarConverter(const ScalarConverter &toCopy);
		~ScalarConverter();

		/* Operators */
		ScalarConverter	&operator=(const ScalarConverter &toCopy);

		/* Methods */
		static bool	_isLiteral(const std::string &str);
		static bool	_isChar(const std::string &str);
		static bool	_isInt(const std::string &str);
		static bool	_isFloat(const std::string &str);
		static bool	_isDouble(const std::string &str);
		
		static void	_printType(const std::string &str);

		static void	_printChar(const std::string &str);
		static void	_printInt(const std::string &str);
		static void	_printFloat(const std::string &str);
		static void	_printDouble(const std::string &str);
			
};


#endif