/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:29:35 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 21:45:40 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	level = "";

	if (av[1])
		level = av[1];
	if (ac != 2 || (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR"))
	{
		std::cerr << "Invalid parameter. Usage:\n./harlFilter [LEVEL]\n";
		std::cerr << "[LEVEL] can be: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (EXIT_FAILURE);
	}
	harl.complain(level);
	return (EXIT_SUCCESS);
}
