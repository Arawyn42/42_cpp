/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:23:33 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/15 16:06:45 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <exception>
#include <stack>

class RPN
{
	public:
		/* Constructors */
		RPN(const std::string &expression);
		RPN(const RPN &toCopy);
		~RPN();

		/* Operators */
		RPN	&operator=(const RPN &toCopy);
		
		/* Methods */
		void		calculate();

	private:
		/* Attributes */
		const std::string	_expression;
		std::stack<double>		_stack;
		
		/* Constructors */
		RPN();

		/* Exceptions */
		class	InvalidExpressionException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
		
		class	DivisionByZeroException : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		class	StackTooSmallException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
		
		/* Methods */
		void	_isExpressionValid(const std::string &expression) const;
		void	_doOperation(double lhs, double rhs, char op);
		
};