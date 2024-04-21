/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:27:05 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:30:31 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain(void) {
	std::cout << "Brain default constructor called." << std::endl;
};

Brain::Brain(const Brain &toCopy)
{
	*this = toCopy;
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
}

// Operators
Brain& Brain::operator=(const Brain &toCopy)
{
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = toCopy.ideas[i];
	std::cout << "Brain copy assignment operator called." << std::endl;
	return *this;
}
