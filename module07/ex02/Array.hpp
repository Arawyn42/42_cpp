/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:12:46 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/03 15:19:46 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <iostream>
# include <stdint.h>
# include <exception>

template <typename T>
class Array
{
	public:
		/* Constructors */
		Array();
		Array(unsigned int size);
		Array(const Array &toCopy);
		~Array();

		/* Operators */
		Array			&operator=(const Array &toCopy);
		T				&operator[](unsigned int i) const;
		
		/* Exceptions */
		class	OutOfBoundsException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw();
		};
		
		/* Members */
		unsigned int	size() const;
	
	private:
		T				*_array;
		unsigned int	_size;
};

/* Constructors */
template <typename T>
Array<T>::Array() : _array(new T[0]()), _size(0)
{
	
}

template <typename T>
Array<T>::Array(unsigned int size) : _array(new T[size]()), _size(size)
{
	
}

template <typename T>
Array<T>::Array(const Array &toCopy)
{
	if (this != &toCopy)
	{	
		this->_size = toCopy._size;
		this->_array = new T[toCopy._size];
		for (unsigned int i = 0 ; i < this->_size ; i++)
			this->_array[i] = toCopy._array[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}


/* Operators */
template <typename T>
Array<T>	&Array<T>::operator=(const Array &toCopy)
{
	if (this != &toCopy)
	{
		delete [] this->_array;
	
		this->_size = toCopy._size;
		this->_array = new T[toCopy._size];
		for (unsigned int i = 0 ; i < this->_size ; i++)
			this->_array[i] = toCopy._array[i];
	}
	
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw Array<T>::OutOfBoundsException();
	
	return (this->_array[i]);
}

/* Exceptions */
template <typename T>
const char	*Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Exception error: Out of bounds.");
}

/* Members */
template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

#endif