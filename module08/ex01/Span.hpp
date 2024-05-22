/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:08:17 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/22 18:19:12 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	public:
		/* Constructors */
		Span(int N);
		Span(const Span &toCopy);
		~Span();

		/* Operators */
		Span	&operator=(const Span &toCopy);

		/* Exceptions */
		class TooMuchElementsException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
		
		class NotEnoughElementsException : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		/* Members */
		void	addNumber(int n);
		void	addRandomNumbers(unsigned int quantity);
		int		shortestSpan();
		int		longestSpan();
		void	printElements();

	private:
		Span();
		unsigned int		_maxSize;
		std::vector<int>	_elements;
	
};