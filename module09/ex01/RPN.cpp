/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:45:02 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/15 16:03:37 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/******************************** Constructors ********************************/
RPN::RPN()
{
	
}

RPN::RPN(const std::string &expression) : _expression(expression)
{
	isExpressionValid(expression);
}

RPN::RPN(const RPN &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
}

RPN::~RPN()
{
	
}


/********************************* Operators **********************************/
RPN	&RPN::operator=(const RPN &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	return (*this);
}


/********************************* Exceptions *********************************/
const char	*RPN::InvalidExpressionException::what() const throw()
{
	return ("Error: Invalid expression.");
}

const char	*RPN::DivisionByZeroException::what() const throw()
{
	return ("Error: Division by zero.");
}

const char	*RPN::StackTooSmallException::what() const throw()
{
	return ("Error: Stack too small: Need at least 2 numbers to make an operation.");
}


/********************************** Methods ***********************************/
void	RPN::isExpressionValid(const std::string &expression)
{
	std::stringstream	ss(expression);
	std::string			split;
	
	while (std::getline(ss, split, ' '))
	{
		if (split.length() > 1)
			throw (RPN::InvalidExpressionException());
		if (split.find_first_not_of("0123456789+-*/") != std::string::npos)
			throw (RPN::InvalidExpressionException());
	}
	
}

void	RPN::doOperation(double lhs, double rhs, char op)
{
	switch (op)
	{
		case '+':
			_stack.push(lhs + rhs);
			break;
		case '-':
			_stack.push(lhs - rhs);
			break;
		case '*':
			_stack.push(lhs * rhs);
			break;
		case '/':
			if (rhs == 0)
				throw (RPN::DivisionByZeroException());
			_stack.push(lhs / rhs);
			break;
	}
}

void	RPN::calculate()
{
	double	lhs, rhs;
	
	for (std::string::const_iterator it = this->_expression.begin() ;
				it != this->_expression.end() ; it++)
	{
		if (std::isspace(*it))
			continue;
		else if (std::isdigit(*it))
			this->_stack.push(*it - '0');
		else
		{
			if (_stack.size() < 2)
				throw (RPN::StackTooSmallException());
			rhs = _stack.top();
			_stack.pop();
			lhs = _stack.top();
			_stack.pop();
			doOperation(lhs, rhs, *it);
		}
	}

	if (_stack.size() != 1)
		throw (RPN::InvalidExpressionException());
	
	std::cout << this->_stack.top() << std::endl;
}
