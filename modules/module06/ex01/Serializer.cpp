/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:50:50 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/01 18:01:19 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Constructors
Serializer::Serializer()
{
	
}

Serializer::Serializer(const Serializer &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
}

Serializer	&Serializer::operator=(const Serializer &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
	
	return (*this);
}

Serializer::~Serializer()
{
	
}


// Members
uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
