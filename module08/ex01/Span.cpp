/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:20:11 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/10 00:09:32 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


/******************************** Constructors ********************************/
Span::Span() {}

Span::Span(int N) : _maxSize(N) {}

Span::Span(const Span &toCopy)
{
	if (&toCopy != this)
		*this = toCopy;
}

Span::~Span() {}

/********************************* Operators **********************************/
Span	&Span::operator=(const Span &toCopy)
{
	if (&toCopy != this)
		*this = toCopy;
	return (*this);
}

/********************************* Exceptions *********************************/
const char	*Span::TooMuchElementsException::what() const throw()
{
	return ("Can't add more elements: Span is full.");
}

const char	*Span::NotEnoughElementsException::what() const throw()
{
	return ("Can't find any distance: Not enough elements in the span.");
}

/********************************* Members *********************************/
void	Span::addNumber(int n)
{
	if (this->_elements.size() >= this->_maxSize)
		throw (Span::TooMuchElementsException());
	this->_elements.push_back(n);
}

void	Span::addRandomNumbers(unsigned int quantity)
{
	srand(time(NULL));
	try
	{
		for (unsigned int i = 0 ; i < quantity ; i++)
			this->addNumber(rand());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int		Span::shortestSpan()
{
	if (this->_elements.size() <= 1)
		throw (Span::NotEnoughElementsException());
	
	std::vector<int>	v = this->_elements;
	int					smallestDistance = std::abs(v.at(1) - v.at(0));
	
	std::sort(v.begin(), v.end());
	for (std::vector<int>::iterator i = v.begin() ; i != v.end() - 1 ; i++)
		if (std::abs(*(i + 1) - *i) < smallestDistance)
			smallestDistance = std::abs(*(i + 1) - *i);
	return (smallestDistance);
}

int		Span::longestSpan()
{
	if (this->_elements.size() <= 1)
		throw (Span::NotEnoughElementsException());
	
	std::vector<int>	v = this->_elements;
	int					longestDistance = std::abs(v.at(1) - v.at(0));
	
	std::sort(v.begin(), v.end());
	for (std::vector<int>::iterator i = v.begin() ; i != v.end() - 1 ; i++)
		if (std::abs(*(i + 1) - *i) > longestDistance)
			longestDistance = std::abs(*(i + 1) - *i);
	return (longestDistance);
}

void	Span::printElements()
{
	std::cout << "Elements in Span:\n";
	unsigned int	n = 15;				// Numbers per line
	
	for (unsigned int i = 0 ; i <= this->_elements.size() / n ; i++)
	{
		for (unsigned int j = 0 ; j < n ; j++)
		{
			if (i * n + j < this->_elements.size())
				std::cout << this->_elements.at(i * n + j) << " ";
		}
		std::cout << std::endl;
	}
}
