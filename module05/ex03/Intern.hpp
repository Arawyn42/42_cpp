/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:00:16 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 21:09:18 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		/* Constructors */
		Intern();
		Intern(const Intern &toCopy);
		~Intern();

		/* Operators */
		Intern  &operator=(const Intern &toCopy);

		/* Exceptions */
		class FormNotExisting : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		/* Members */
		AForm	*makeForm(std::string name, std::string target);
};

#endif