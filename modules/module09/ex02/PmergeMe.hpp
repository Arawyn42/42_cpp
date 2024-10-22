/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:24:33 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/16 02:02:48 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <sys/time.h>
#include <iostream>
#include <iomanip>
#include <exception>
#include <vector>
#include <deque>
#include <set>

class PmergeMe
{
	public:
		/* Constructors */
		PmergeMe(char **sequence);
		PmergeMe(const PmergeMe &toCopy);
		~PmergeMe();
		
		/* Operators */
		PmergeMe	&operator=(const PmergeMe &rhs);
		
		/* Members */
		void	execute();
		
	private:
		/* Attributes */
		int					_size;
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		
		/* Constructors */
		PmergeMe();

		/* Exceptions */
		class		NotADigitException : public std::exception
		{
			const char	*what() const throw();
		};

		class		DuplicatesException : public std::exception
		{
			const char	*what() const throw();
		};
		
		/* Methods */
		void		_checkArgs(char **sequence) const;
		void		_checkDuplicates();
		void		_parseSequence(char **sequence);
		double		_getTime() const;
		template <typename T> void	_sortSequence(T &container);
		
		
};

std::ostream	&operator<<(std::ostream &stream, std::vector<int> &vector);
std::ostream	&operator<<(std::ostream &stream, std::deque<int> &deque);


template <typename T>
void	PmergeMe::_sortSequence(T &container)
{
	if (container.size() < 2)
		return ;
	else if (container.size() < 16)
	{
		for (typename T::iterator i = container.begin() ; i != container.end() ; i++)
			for (typename T::iterator j = i ; j != container.begin() && *(j - 1) > *j ; j--)
				std::swap(*j, *(j - 1));
		return ;
	}
	
	typename T::iterator	half = container.begin() + container.size() / 2;
	T	left(container.begin(), half);
	T	right(half, container.end());
	
	_sortSequence(left);
	_sortSequence(right);
	
	typename T::iterator	i, j, k;
	i = left.begin();
	j = right.begin();
	k = container.begin();
	while (i != left.end() && j != right.end())
	{
		if (*i < *j)
			*(k++) = *(i++);
		else
			*(k++) = *(j++);
	}
	while (i != left.end())
		*(k++) = *(i++);
	while (j != right.end())
		*(k++) = *(j++);
}
