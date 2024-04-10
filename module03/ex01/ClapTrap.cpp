/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:24:34 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 17:03:17 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/******************************** Constructors ********************************/
/* Default constructor */
ClapTrap::ClapTrap() : _name("default"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ClapTrap " << this->_name << " has been created." << std::endl;
}

/* Constructor */
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ClapTrap " << this->_name << " has been created." << std::endl;
}

/* Copy constructor */
ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	std::cout << "ClapTrap " << this->_name << " has been copied." << std::endl;
}

/* Copy assignment operator overload constructor */
ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	std::cout << "ClapTrap " << this->_name << " has been assigned with = operator." << std::endl;
	return (*this);
}

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed." << std::endl;
}


/******************************* Public methods *******************************/
void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " (" << this->_hitPoints << " / 100) is dead and can't attack." << std::endl;
		return ;
	}
	
	if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " (" << this->_hitPoints << " / 100) is out of energy points." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " (" << this->_hitPoints << " / 100) attacks " << target << ", causing ";
	std::cout << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= amount)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " (" << this->_hitPoints << " / 100) died." << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " (" << this->_hitPoints << " / 100) took " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " (" << this->_hitPoints << " / 100) is out of energy points." << std::endl;
		return ;
	}
	if (this->_hitPoints == 100)
	{
		std::cout << "ClapTrap " << this->_name << "'s hit points are already at maximum!" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " (" << this->_hitPoints << " / 100) repairs itself and gets " << amount;
	std::cout << " hit points back!" << std::endl;
}
