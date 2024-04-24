/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:00:16 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 19:16:16 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"

class Intern
{
	public:
		/* Constructors */
		Intern();
		Intern(const Intern &toCopy);
		~Intern();

		/* Operators */
		Intern  &operator=(const Intern &toCopy);

		/* Members */
		AForm	*makeForm(std::string name, std::string target);

	private:
	
};

#endif