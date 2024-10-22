/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:10:31 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 21:45:58 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "\n----------------- SHRUBBERY ------------------" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 100);
			std::cout << bob << '\n';
			ShrubberyCreationForm	form("file");
			std::cout << form << '\n';
			bob.signForm(form);
			bob.executeForm(form);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n------------ SHRUBBERY NOT SIGNED ------------" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 100);
			std::cout << bob << '\n';
			ShrubberyCreationForm	form("file");
			std::cout << form << '\n';
			bob.executeForm(form);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << "\n---------- SHRUBBERY GRADE TOO LOW -----------" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 140);
			std::cout << bob << '\n';
			ShrubberyCreationForm	form("file");
			std::cout << form << '\n';
			bob.signForm(form);
			bob.executeForm(form);
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
			Bureaucrat			bob("Bob", 44);
			std::cout << bob << '\n';
			RobotomyRequestForm	form("file");
			std::cout << form << '\n';
			bob.signForm(form);
			bob.executeForm(form);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n------------ ROBOTOMY NOT SIGNED -------------" << std::endl;
	{
		try
		{
			Bureaucrat			bob("Bob", 44);
			std::cout << bob << '\n';
			RobotomyRequestForm	form("file");
			std::cout << form << '\n';
			bob.executeForm(form);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << "\n---------- ROBOTOMY GRADE TOO LOW ------------" << std::endl;
	{
		try
		{
			Bureaucrat			bob("Bob", 66);
			std::cout << bob << '\n';
			RobotomyRequestForm	form("file");
			std::cout << form << '\n';
			bob.signForm(form);
			bob.executeForm(form);
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
			Bureaucrat			bob("Bob", 4);
			std::cout << bob << '\n';
			PresidentialPardonForm	form("file");
			std::cout << form << '\n';
			bob.signForm(form);
			bob.executeForm(form);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n---------- PRESIDENTIAL NOT SIGNED -----------" << std::endl;
	{
		try
		{
			Bureaucrat			bob("Bob", 4);
			std::cout << bob << '\n';
			PresidentialPardonForm	form("file");
			std::cout << form << '\n';
			bob.executeForm(form);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << "\n-------- PRESIDENTIAL GRADE TOO LOW ----------" << std::endl;
	{
		try
		{
			Bureaucrat			bob("Bob", 20);
			std::cout << bob << '\n';
			PresidentialPardonForm	form("file");
			std::cout << form << '\n';
			bob.signForm(form);
			bob.executeForm(form);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	
	return (EXIT_SUCCESS);
}
