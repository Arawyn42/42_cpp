/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:08:17 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/10 02:31:46 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		/* Constructors */
		MutantStack();
		MutantStack(const MutantStack &toCopy);
		~MutantStack();

		/* Opérators */
		MutantStack	&operator=(const MutantStack &toCopy);
		
		/* Iterators */
		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin();
		iterator	end();
	
};

template <typename T>
MutantStack<T>::MutantStack()
{
	
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}