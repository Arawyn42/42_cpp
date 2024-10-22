/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:12:46 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/03 13:28:08 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <cstdlib>
# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T a, T b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T	max(T a, T b)
{
	return ((a > b) ? a : b);
}

#endif