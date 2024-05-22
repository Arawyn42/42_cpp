/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 22:52:53 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/22 18:53:47 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	{
		Span	span(5);
		
		std::cout << "Creating a span with 5 elements...\n" << std::endl;
		try
		{
			span.addNumber(6);
			span.addNumber(3);
			span.addNumber(17);
			span.addNumber(9);
			span.addNumber(11);
			span.printElements();
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout << "\nAdding one more elements...\n";
			span.addNumber(5);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout << "\nShortest Span = " << span.shortestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout << "\nLongest Span = " << span.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << "\n\n";
	}
	
	{
		Span	span(2000);
		srand(time(NULL));
		
		std::cout << "Creating a span with 1 element...\n" << std::endl;
		try
		{
			span.addNumber(55);
			span.printElements();
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout << "\nShortest Span = " << span.shortestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout << "\nLongest Span = " << span.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << "\n\n";
	}
	
	{
		Span	span(1994);
		srand(time(NULL));
		
		std::cout << "Creating a span with 1994 random elements...\n" << std::endl;
		try
		{
			for (int i = 0 ; i < 1994 ; i++)
				span.addNumber(rand() % 10000);
			span.printElements();
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout << "\nAdding one more elements...\n";
			span.addNumber(5);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout << "\nShortest Span = " << span.shortestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		try
		{
			std::cout << "\nLongest Span = " << span.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	// {
	// 	Span	span(12000);
		
	// 	std::cout << "Creating a span with 12000 random elements...\n" << std::endl;
	// 	try
	// 	{
	// 		span.addRandomNumbers(12000);
	// 		span.printElements();
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
		
	// 	try
	// 	{
	// 		std::cout << "\nAdding one more elements...\n";
	// 		span.addNumber(5);
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
		
	// 	try
	// 	{
	// 		std::cout << "\nShortest Span = " << span.shortestSpan() << std::endl;
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
		
	// 	try
	// 	{
	// 		std::cout << "\nLongest Span = " << span.longestSpan() << std::endl;
	// 	}
	// 	catch (const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }
	
	return (EXIT_SUCCESS);
}
