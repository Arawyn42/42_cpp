/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:56:58 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 21:57:57 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		/* Constructors */
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &toCopy);
		~RobotomyRequestForm();

		/* Operators */
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &toCopy);

	private:
		RobotomyRequestForm();
		void	executeFormAction(Bureaucrat const &executor) const;
		
};

#endif