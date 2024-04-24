/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:00:18 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 21:23:07 by drenassi         ###   ########.fr       */
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

/********************************* Exceptions *********************************/
const char	*Intern::FormNotExisting::what() const throw()
{
	return ("Exception error: Intern: The form specified doesn't exist.");
}

/********************************** Members ***********************************/
AForm	*Intern::makeForm(std::string name, std::string target)
{
	const std::string	formType[3] =
		{"shrubbery creation",
		"robotomy request",
		"presidential pardon"};

    for (int i = 0 ; i < 3 ; i++)
	{
		if (name == formType[i])
		{
			std::cout << GREEN << "Intern creates " << name << " form." << END_COLOR << std::endl;
			switch (i)
			{
			case 0:		return (new ShrubberyCreationForm(target));
			case 1:		return (new RobotomyRequestForm(target));
			case 2:		return (new PresidentialPardonForm(target));
			default:	break;
			}
		}
	}
	throw (Intern::FormNotExisting());
	return (NULL);
}
