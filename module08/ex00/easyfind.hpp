/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 22:11:40 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/09 22:54:17 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class EasyfindException : public std::exception
{
	public:
		const char	*what() const throw() {	return ("Not found.");	}
};

template <typename T>
typename T::iterator	easyfind(T &container, int toFind)
{
	typename T::iterator	pos = std::find(container.begin(), container.end(), toFind);
	if (pos == container.end())
		throw (EasyfindException());
	return (pos);
}
