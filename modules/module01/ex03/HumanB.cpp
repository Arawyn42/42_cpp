/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:55:16 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 03:49:44 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "HumanB (" << this->_name << ") created with no weapon." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB (" << this->_name << ") deleted." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << "." << std::endl;
}