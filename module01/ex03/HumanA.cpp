/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:53:23 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 03:39:58 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA (" << this->_name << ") created with " << this->_weapon.getType() << "." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA (" << this->_name << ") deleted." << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << "." << std::endl;
}
