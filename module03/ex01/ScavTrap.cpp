/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:11:22 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 15:46:52 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/******************************** Constructors ********************************/
/* Default constructor */
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been created." << std::endl;
}

/* Constructor */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " has been created." << std::endl;
}

/* Copy constructor */
ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
	std::cout << "ScavTrap " << this->_name << " has been copied." << std::endl;
}

/* Copy assignment operator overload constructor */
ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
	ClapTrap::operator=(scavTrap);
	std::cout << "ScavTrap " << this->_name << " has been assigned with = operator." << std::endl;
	return (*this);
}

/* Destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed." << std::endl;
}

/******************************* Public methods *******************************/
void	ScavTrap::guardGate()
{
	if (this->_hitPoints == 0)
		std::cout << "Can't activate Gate Keeper mode because " << this->_name << " is dead." << std::endl;
	else
		std::cout << "Gate Keeper mode activated for " << this->_name << std::endl;
}
