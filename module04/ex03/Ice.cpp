/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:27:00 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 21:39:38 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors
Ice::Ice() : AMateria("Ice")
{
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(const Ice &toCopy) : AMateria("Ice")
{
	*this = toCopy;
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called." << std::endl;
}

// Operators
Ice	&Ice::operator=(const Ice &toCopy)
{
	this->_type = toCopy._type;

	std::cout << "Ice assignment operator called." << std::endl;
	return (*this);
}

AMateria	*Ice::clone() const
{
	std::cout << this->getType() << " has been cloned." << std::endl;
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
