/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:20:48 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/12 16:07:43 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



int	main(int ac, char **av)
{
	if (ac != 2)
		error_exit("Error: cound not open file.");

	BitcoinExchange	btc;
	btc.printResults(av[1]);
	
	return (EXIT_SUCCESS);
}
