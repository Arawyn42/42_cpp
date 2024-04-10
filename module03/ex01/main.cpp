/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:23:35 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 17:04:39 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	Billy("Billy");
	ScavTrap	John("John");

	std::cout << '\n';
		
	Billy.attack("John");
	John.takeDamage(20);
	std::cout << '\n';

	John.attack("Billy");
	Billy.takeDamage(20);
	std::cout << '\n';
	
	John.beRepaired(4);
	Billy.beRepaired(1);
	std::cout << '\n';

	Billy.attack("John");
	John.takeDamage(20);
	std::cout << '\n';

	John.attack("Billy");
	Billy.takeDamage(20);
	std::cout << '\n';

	Billy.attack("John");
	John.takeDamage(20);
	std::cout << '\n';

	John.attack("Billy");
	Billy.takeDamage(20);
	std::cout << '\n';
	
	Billy.attack("John");
	John.takeDamage(20);
	std::cout << std::endl;

	John.attack("Billy");
	Billy.takeDamage(20);
	std::cout << '\n';
	
	Billy.attack("John");
	John.takeDamage(20);
	std::cout << std::endl;

	John.attack("Billy");
	Billy.takeDamage(20);
	std::cout << '\n';
	
	Billy.attack("John");
	John.takeDamage(20);
	std::cout << std::endl;

	John.attack("Billy");
	std::cout << '\n';

	Billy.guardGate();
	John.guardGate();
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}
