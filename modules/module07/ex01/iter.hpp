/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:12:46 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/03 13:38:53 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>
# include <iostream>

template <typename T>
void	print(T &n)
{
	std::cout << n << std::endl;
}

template <typename T>
void	increment(T &n)
{
	n++;
}

template <typename T>
void	bzero(T &n)
{
	n = 0;
}

template <typename T>
void	iter(T *arrayPtr, size_t len, void(*f)(T &))
{
	for (size_t i = 0 ; i < len ; i++)
		f(arrayPtr[i]);
}

#endif