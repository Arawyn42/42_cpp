/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:15:31 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 19:45:41 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		errorExit(ARGS_ERROR);
	
	Sed	sed(av[1]);
	sed.replaceBy(av[2], av[3]);
	return (EXIT_SUCCESS);
}
