/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:04:36 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 02:17:22 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "[no_name]";
	std::cout << this->_name << " created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " deleted." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


void	Zombie::setName(std::string name)
{
	this->_name = name;
}
