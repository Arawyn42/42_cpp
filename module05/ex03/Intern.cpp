/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:00:18 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 19:28:08 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/******************************** Constructors ********************************/
Intern::Intern()
{
	
}

Intern::Intern(const Intern &toCopy)
{
	*this = toCopy;
}

Intern::~Intern()
{
	
}

/********************************* Operators **********************************/
Intern	&Intern::operator=(const Intern &toCopy)
{
	*this = toCopy;
	
	return (*this);
}

/********************************** Members ***********************************/
AForm	*Intern::makeForm(std::string name, std::string target)
{
	const std::string	formType[3] =
		{"shrubbery creation",
		"robotomy request",
		"presidential pardon"};
	
    for (int i = 0 ; i < 3 ; i++)
	
}
