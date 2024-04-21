/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:14:13 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 22:05:41 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource() : _learned(0)
{
	for (int i = 0 ; i < 4 ; i++)
		this->_materias[i] = NULL;
	std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &toCopy)
{
	*this = toCopy;
	std::cout << "MateriaSource copy constructor called." << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < 4 ; i++)
		if (this->_materias[i])
			delete this->_materias[i];
	std::cout << "MateriaSource destructor called." << std::endl;
}


// Operators
MateriaSource	&MateriaSource::operator=(const MateriaSource &toCopy)
{
	this->_learned = toCopy._learned;

	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (toCopy._materias[i])
			this->_materias[i] = toCopy._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	std::cout << "MateriaSource assignment operator called." << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_learned < 4)
	{
		this->_materias[this->_learned] = materia;
		std::cout << this->_materias[this->_learned]->getType() << " has been learned. (";
		this->_learned++;
		std::cout << this->_learned << " materias learned)" << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0 ; i < 4 ; i++)
		if (this->_materias[i] && this->_materias[i]->getType() == type)
		{
			std::cout << type << " has been created." << std::endl;
			return (this->_materias[i]->clone());
		}
	return (NULL);
}