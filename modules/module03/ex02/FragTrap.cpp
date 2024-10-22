/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:37:47 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 17:13:49 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/******************************** Constructors ********************************/
/* Default constructor */
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap " << this->_name << " has been created." << std::endl;
}

/* Constructor */
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << this->_name << " has been created." << std::endl;
}

/* Copy constructor */
FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "FragTrap " << this->_name << " has been copied." << std::endl;
}

/* Copy assignment operator overload constructor */
FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	ClapTrap::operator=(fragTrap);
	std::cout << "FragTrap " << this->_name << " has been assigned with = operator." << std::endl;
	return (*this);
}

/* Destructor */
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been destroyed." << std::endl;
}

/******************************* Public methods *******************************/
void	FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "FlagTrap " << this->_name << " (" << this->_hitPoints << " / 100) is dead and can't attack." << std::endl;
		return ;
	}
	
	if (this->_energyPoints == 0)
	{
		std::cout << "FlagTrap " << this->_name << " (" << this->_hitPoints << " / 100) is out of energy points." << std::endl;
		return ;
	}
	std::cout << "FlagTrap " << this->_name << " (" << this->_hitPoints << " / 100) attacks " << target << ", causing ";
	std::cout << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	FragTrap::highFivesGuys()
{
	if (this->_hitPoints == 0)
		std::cout << this->_name << " can't high five because he is dead." << std::endl;
	else
		std::cout << this->_name << " high fives other guys!" << std::endl;
}