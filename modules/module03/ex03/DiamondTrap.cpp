/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:58:30 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 19:51:49 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/******************************** Constructors ********************************/
/* Default constructor */
DiamondTrap::DiamondTrap() : ClapTrap("defaultDT_clap_trap")
{
	this->_name = "defaultDT";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " has been created." << std::endl;
}

/* Constructor */
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " has been created." << std::endl;
}

/* Copy constructor */
DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
{
	this->_name = diamondTrap._name;
	this->ClapTrap::_name = diamondTrap.ClapTrap::_name;
	this->_hitPoints = diamondTrap._hitPoints;
	this->_energyPoints = diamondTrap._energyPoints;
	this->_attackDamage = diamondTrap._attackDamage;
	std::cout << "DiamondTrap " << this->_name << " has been copied." << std::endl;
}

/* Copy assignment operator overload constructor */
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	this->_name = diamondTrap._name;
	this->ClapTrap::_name = diamondTrap.ClapTrap::_name;
	this->_hitPoints = diamondTrap._hitPoints;
	this->_energyPoints = diamondTrap._energyPoints;
	this->_attackDamage = diamondTrap._attackDamage;
	std::cout << "DiamondTrap " << this->_name << " has been assigned with = operator." << std::endl;
	return (*this);
}

/* Destructor */
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " has been destroyed." << std::endl;
}

/******************************* Public methods *******************************/
void	DiamondTrap::whoAmI()
{
	std::cout << "Who am I? ClapTrap name: " << ClapTrap::_name;
	std::cout << "; DiamondTrap name: " << this->_name << std::endl;
}
