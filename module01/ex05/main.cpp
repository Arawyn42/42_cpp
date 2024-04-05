/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:29:35 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 21:01:14 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	level;

	std::cout << BOLDBLUE << "\n\tWelcome to Harl's world..." << END_COLOR << std::endl;
	while (1)
	{
		std::cout << "\n\tWhich level do you want (DEBUG / INFO / WARNING / ERROR) ?\n\n\t> " << CYAN;
		std::getline(std::cin, level);
		std::cout << END_COLOR << std::endl;
		if (level == "EXIT")
			return (EXIT_SUCCESS);
		else if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
			std::cout << RED << "\tThis level doesn't exist. Enter EXIT to quit." << END_COLOR << std::endl;
		else
			harl.complain(level);
	}
	return (EXIT_SUCCESS);
}
