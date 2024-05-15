/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:23:08 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/15 15:36:11 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: Need one argument. Usage example:\n"
				  << "./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\""
				  << std::endl;
		return (EXIT_FAILURE);
	}
	
	try
	{
		RPN	rpn(av[1]);
		rpn.calculate();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (EXIT_FAILURE);
	}
	
	return (EXIT_SUCCESS);
}
