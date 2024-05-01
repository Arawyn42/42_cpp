/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:22:13 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/01 17:38:35 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static Base	*generate()
{
	srand(time(NULL));
	
	char c = "ABC"[rand() % 3];

	std::cout << c << " generated." << std::endl;
	
	switch (c)
	{
		case 'A':
			return (new A);
		case 'B':
			return (new B);
		case 'C':
			return (new C);
		default:
			return (NULL);
	}
	
	return (NULL);
}

static void	identify(Base *p)
{
	bool casted;

	std::cout << "Identified (with pointer): ";

	casted = dynamic_cast<A *>(p);
	if (casted)
	{
		std::cout << "A." << std::endl;
		return ;
	}
	
	casted = dynamic_cast<B *>(p);
	if (casted)
	{
		std::cout << "B." << std::endl;
		return ;
	}
	
	casted = dynamic_cast<C *>(p);
	if (casted)
	{
		std::cout << "C." << std::endl;
		return ;
	}
	
	if (!casted)
		std::cout << "unknown." << std::endl;
}

static void	identify(Base &p)
{
	std::cout << "Identified (with reference): ";

	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A." << std::endl;
	}
	catch (const std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "B." << std::endl;
		}
		catch (const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "C." << std::endl;
			}
			catch (const std::exception& e)
			{
				std::cout << "unknown." << std::endl;
			}
		}
	}
}

int	main()
{
	Base	*base;
	
	base = generate();
	identify(base);
	identify(*base);
	
	delete base;

	return (EXIT_SUCCESS);
}
