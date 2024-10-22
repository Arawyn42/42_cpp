/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:33:27 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 22:34:30 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		/* Constructors */
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &toCopy);
		~PresidentialPardonForm();

		/* Operators */
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &toCopy);

	private:
		PresidentialPardonForm();
		void	executeFormAction(Bureaucrat const &executor) const;
		
};

#endif