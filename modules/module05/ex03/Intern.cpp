/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:00:18 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 22:14:40 by drenassi         ###   ########.fr       */
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
static AForm	*Shrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm	*Robotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*Presidential(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	const std::string	formType[3] =
		{"shrubbery creation",
		"robotomy request",
		"presidential pardon"};

	typedef	AForm	*(*Forms)(const std::string);
	Forms	forms[3] = {&Shrubbery, &Robotomy, &Presidential};

    for (int i = 0 ; i < 3 ; i++)
	{
		if (name == formType[i])
		{
			std::cout << GREEN << "Intern creates " << name << " form." << END_COLOR << std::endl;
			return (forms[i](target));
		}
	}
	throw (Intern::FormNotExisting());
	return (NULL);
}
