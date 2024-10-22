/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:19:03 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 21:32:40 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type)
{
	std::cout << "AMateria constructor called." << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called." << std::endl;
}


// Setters and getters
const std::string &AMateria::getType() const
{
	return (this->_type);
}


// Members
void AMateria::use(ICharacter& target)
{
	(void) target;
}