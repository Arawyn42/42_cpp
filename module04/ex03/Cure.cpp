/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:36:46 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 21:38:48 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructors
Cure::Cure() : AMateria("Cure")
{
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(const Cure &toCopy) : AMateria("Cure")
{
	*this = toCopy;
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called." << std::endl;
}

// Operators
Cure	&Cure::operator=(const Cure &toCopy)
{
	this->_type = toCopy._type;

	std::cout << "Cure assignment operator called." << std::endl;
	return (*this);
}

AMateria	*Cure::clone() const
{
	std::cout << this->getType() << " has been cloned." << std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
