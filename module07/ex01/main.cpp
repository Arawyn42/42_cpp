/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:19:10 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/03 13:59:40 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	{
		int	array[4] = {1, 5, 10, 20};
		std::cout << "INT ARRAY:" << std::endl;
		::iter(array, 4, ::print);
		::iter(array, 4, ::bzero);
		std::cout << "BZERO ON ARRAY:" << std::endl;
		::iter(array, 4, ::print);
	}
	
	std::cout << std::endl;
	
	{
		int	array[4] = {1, 5, 10, 20};
		std::cout << "INT ARRAY:" << std::endl;
		::iter(array, 4, ::print);
		::iter(array, 4, ::increment);
		std::cout << "INCREMENT ON ARRAY:" << std::endl;
		::iter(array, 4, ::print);
	}

	std::cout << std::endl;
	
	{
		float	array[4] = {1.5, 5.2, 10.12, 20.33};
		std::cout << "FLOAT ARRAY:" << std::endl;
		::iter(array, 4, ::print);
		::iter(array, 4, ::increment);
		std::cout << "INCREMENT ON ARRAY:" << std::endl;
		::iter(array, 4, ::print);
	}

	std::cout << std::endl;

	{
		char	array[4] = {'A', 'B', 'C', 'D'};
		std::cout << "CHAR ARRAY:" << std::endl;
		::iter(array, 4, ::print);
		::iter(array, 4, ::increment);
		std::cout << "INCREMENT ON ARRAY:" << std::endl;
		::iter(array, 4, ::print);
	}
	
	return (EXIT_SUCCESS);
}
