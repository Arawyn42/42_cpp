/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:06:50 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 21:35:37 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		/* Constructors */
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &toCopy);
		~ShrubberyCreationForm();

		/* Operators */
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &toCopy);

	private:
		ShrubberyCreationForm();
		void	executeFormAction(Bureaucrat const &executor) const;
		
};

#endif