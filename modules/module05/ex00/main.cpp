/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:10:31 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 11:37:54 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "---------------- NO EXCEPTION ----------------" << std::endl;
	{
		try
		{
			std::cout << "Trying to create Bob with grade 5..." << '\n';
			Bureaucrat	bob("Bob", 5);
			std::cout << bob << '\n';

			std::cout << "Copying Bob with copy constructor..." << '\n';
			Bureaucrat	cpy(bob);
			std::cout << cpy << '\n';

			std::cout << "Copying cpy with copy assignment operator..." << '\n';
			Bureaucrat	cpy2 = cpy;
			std::cout << cpy2 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
	
	std::cout << "\n--------------- GRADE TOO HIGH ---------------" << std::endl;
	{
		try
		{
			std::cout << "Trying to create Bob with grade 0..." << '\n';
			Bureaucrat	bob("Bob", 0);
			std::cout << bob << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n--------------- GRADE TOO LOW ----------------" << std::endl;
	{
		try
		{
			std::cout << "Trying to create Bob with grade 151..." << '\n';
			Bureaucrat	bob("Bob", 151);
			std::cout << bob << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "\n----------------- INCREMENT ------------------" << std::endl;
	{
		try
		{
			Bureaucrat	billy("Billy", 5);
			std::cout << billy << '\n';
			std::cout << "Incrementing grade..." << '\n';
			billy.incrementGrade();
			std::cout << billy << '\n';
			
			Bureaucrat	bob("Bob", 1);
			std::cout << bob << '\n';
			std::cout << "Incrementing grade..." << '\n';
			bob.incrementGrade();
			std::cout << bob << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	std::cout << "\n----------------- DECREMENT ------------------" << std::endl;
	{
		try
		{
			Bureaucrat	billy("Billy", 76);
			std::cout << billy << '\n';
			std::cout << "Decrementing grade..." << '\n';
			billy.decrementGrade();
			std::cout << billy << '\n';
			
			Bureaucrat	bob("Bob", 150);
			std::cout << bob << '\n';
			std::cout << "Decrementing grade..." << '\n';
			bob.decrementGrade();
			std::cout << bob << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	return (EXIT_SUCCESS);
}
