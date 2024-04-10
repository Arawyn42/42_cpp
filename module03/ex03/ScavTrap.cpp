/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:11:22 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 19:49:10 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/******************************** Constructors ********************************/
/* Default constructor */
ScavTrap::ScavTrap() : ClapTrap()
{
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " has been created." << std::endl;
}

/* Constructor */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_attackDamage = 20;
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
void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " (" << this->_hitPoints << " / 100) is dead and can't attack." << std::endl;
		return ;
	}
	
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " (" << this->_hitPoints << " / 100) is out of energy points." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " (" << this->_hitPoints << " / 100) attacks " << target << ", causing ";
	std::cout << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate()
{
	if (this->_hitPoints == 0)
		std::cout << "Can't activate Gate Keeper mode because " << this->_name << " is dead." << std::endl;
	else
		std::cout << "Gate Keeper mode activated for " << this->_name << std::endl;
}
