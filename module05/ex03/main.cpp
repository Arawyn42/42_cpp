/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:10:31 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 21:22:08 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern	intern;
	
	std::cout << "\n----------------- SHRUBBERY ------------------" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 100);
			std::cout << bob << '\n';
			AForm	*form = intern.makeForm("shrubbery creation", "file");
			std::cout << *form << '\n';
			form->beSigned(bob);
			bob.executeForm(*form);
			delete form;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n------------------ ROBOTOMY ------------------" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 44);
			std::cout << bob << '\n';
			AForm	*form = intern.makeForm("robotomy request", "file");
			std::cout << *form << '\n';
			form->beSigned(bob);
			bob.executeForm(*form);
			delete form;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n---------------- PRESIDENTIAL ----------------" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 4);
			std::cout << bob << '\n';
			AForm	*form = intern.makeForm("presidential pardon", "file");
			std::cout << *form << '\n';
			form->beSigned(bob);
			bob.executeForm(*form);
			delete form;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n--------------- NOT EXISTING  ----------------" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 4);
			std::cout << bob << '\n';
			AForm	*form = intern.makeForm("random", "file");
			std::cout << *form << '\n';
			form->beSigned(bob);
			bob.executeForm(*form);
			delete form;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	
	return (EXIT_SUCCESS);
}
