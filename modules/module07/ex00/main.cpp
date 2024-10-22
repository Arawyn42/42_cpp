/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:19:10 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/03 13:27:27 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int	main()
{
	{
		int	a = 5;
		int	b = 20;

		std::cout << "(INT) a = " << a << " ; b = " << b << std::endl;
		std::cout << "Swapping a and b:\n";
		::swap(a, b);
		std::cout << "a = " << a << " ; b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	
	std::cout << std::endl;
	
	{
		std::string	a = "Hello";
		std::string	b = "World!";

		std::cout << "(STRING) a = " << a << " ; b = " << b << std::endl;
		std::cout << "Swapping a and b:\n";
		::swap(a, b);
		std::cout << "a = " << a << " ; b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	
	return (EXIT_SUCCESS);
}
