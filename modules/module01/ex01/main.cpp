/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:04:01 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 02:24:23 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	N = 8;

	Zombie	*horde = zombieHorde(N, "Alphonse");
	for (int i = 0 ; i < N ; i++)
		horde[i].announce();
	
	delete [] horde;
	
	return (0);
}
