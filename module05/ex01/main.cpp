/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:10:31 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 15:23:58 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "\n--------------- GRADE TOO LOW ----------------" << std::endl;
	{
		try
		{
			Form		form("Form", 151, 5);
			std::cout << form << '\n';
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n--------------- GRADE TOO HIGH ----------------" << std::endl;
	{
		try
		{
			Form		form("Form", 10, 0);
			std::cout << form << '\n';
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << "\n---------------- SIGNING FORM ----------------" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 8);
			std::cout << bob << '\n';
			Form		form("Form", 10, 5);
			std::cout << form << '\n';
			std::cout << "Signing form..." << '\n';
			form.beSigned(bob);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n----------------- CAN'T SIGN -----------------" << std::endl;
	{
		try
		{
			Bureaucrat	bob("Bob", 8);
			std::cout << bob << '\n';
			Form		form("Form", 7, 5);
			std::cout << form << '\n';
			std::cout << "Signing form..." << '\n';
			form.beSigned(bob);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	
	return (EXIT_SUCCESS);
}
