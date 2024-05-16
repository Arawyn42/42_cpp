/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:49:43 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/16 00:58:51 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error: Need at least one argument.\n"
				  << "Usage example: ./PmergeMe 3 5 9 7 4" << std::endl;
		return (EXIT_FAILURE);
	}
	try
	{
		PmergeMe	sequence(av);
		sequence.execute();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (EXIT_FAILURE);
	}
	
	return (EXIT_SUCCESS);
}
