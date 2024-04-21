/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:40:34 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 22:17:42 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors
Character::Character()
{
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character(const std::string &name) : _name(name), _equipped(0)
{
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character constructor called." << std::endl;
}

Character::Character(const Character &toCopy)
{
	this->_name = toCopy._name;
	this->_equipped = toCopy._equipped;
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = toCopy._inventory[i]->clone();
	std::cout << "Character copy constructor called." << std::endl;
}

Character::~Character()
{
	for (int i = 0 ; i < 4 ; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	std::cout << "Character destructor called." << std::endl;
}


// Operators
Character &Character::operator=(const Character &toCopy)
{
	this->_name = toCopy._name;
	this->_equipped = toCopy._equipped;
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = toCopy._inventory[i]->clone();
	
	std::cout << "Character assignment operator called." << std::endl;
	return (*this);
}


// Setters and getters
const std::string	&Character::getName() const
{
	return (this->_name);
}


// Members
void	Character::equip(AMateria *m)
{
	if (m && this->_equipped < 4)
	{
		this->_inventory[this->_equipped] = m;
		this->_equipped++;
		std::cout << "Character '" << this->getName() << "' equipped " << m->getType() << "." << std::endl;
	}
}

void	Character::unequip(int idx)
{
	int	n = this->_equipped;

	if (idx >= 0 && idx < n)
	{
		std::cout << "Character '" << this->getName() << "' unequipped ";
		std::cout << this->_inventory[idx]->getType() << ". (";
		std::cout << this->_equipped - 1 << " equipped)" << std::endl;
		for (int i = idx ; i < n - 1 ; i++)
			this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[n - 1] = NULL;
		this->_equipped--;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_equipped && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "There is no materia to use at index " << idx << "." << std::endl;
}
