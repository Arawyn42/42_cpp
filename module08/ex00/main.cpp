/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 22:52:53 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/09 23:04:14 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int>	vect;
	
	for (int i = 0 ; i < 20 ; i++)
		vect.push_back(i * 3);
	
	std::cout << "\nVector: ";
	for (std::vector<int>::iterator i = vect.begin() ; i != vect.end() ; i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	
	{
		std::cout << "\neasyfind(vector, 3): ";
		try
		{
			std::cout << *easyfind(vect, 3) << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << "\neasyfind(vector, 45): ";
		try
		{
			std::cout << *easyfind(vect, 45) << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	{
		std::cout << "\neasyfind(vector, 67): ";
		try
		{
			std::cout << *easyfind(vect, 67) << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return (EXIT_SUCCESS);
}
