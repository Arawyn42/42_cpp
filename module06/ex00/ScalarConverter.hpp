/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:12:10 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/25 19:15:23 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>

enum type
{
	NONE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	LITTERAL
};

class ScalarConverter
{
	public:
		static void		convert(const std::string &str);
		

	private:
		/* Attributes */
		type	_type;
		char	_c;
		int		_i;
		float	_f;
		double	_d;
		
		/* Constructors */
		ScalarConverter();
		ScalarConverter(const ScalarConverter &toCopy);
		~ScalarConverter();

		/* Operators */
		ScalarConverter	&operator=(const ScalarConverter &toCopy);

		/* Setters and getters */
		void	setType(type type);
		type	getType() const;
		
		void	setC(char c);
		char	getC() const;
		
		void	setI(int i);
		int		getI() const;
		
		void	setF(float f);
		float	getF() const;

		void	setD(double d);
		double	getD() const;

		/* Methods */
		void	findType(const std::string &str);
		bool	isLitteral(const std::string &str);
		void	sToC(const std::string &str);
			
};


#endif