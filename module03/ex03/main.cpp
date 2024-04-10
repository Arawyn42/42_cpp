/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:23:35 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 19:58:51 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	Billy("Billy");
	DiamondTrap	John("John");

	std::cout << '\n';
		
	Billy.attack("John");
	John.takeDamage(30);
	std::cout << '\n';

	John.attack("Billy");
	Billy.takeDamage(30);
	std::cout << '\n';
	
	John.beRepaired(4);
	Billy.beRepaired(1);
	std::cout << '\n';

	Billy.attack("John");
	John.takeDamage(30);
	std::cout << '\n';

	John.attack("Billy");
	Billy.takeDamage(30);
	std::cout << '\n';

	Billy.attack("John");
	John.takeDamage(30);
	std::cout << '\n';

	John.attack("Billy");
	Billy.takeDamage(30);
	std::cout << '\n';
	
	Billy.attack("John");
	John.takeDamage(30);
	std::cout << std::endl;

	John.attack("Billy");
	std::cout << '\n';

	Billy.guardGate();
	John.guardGate();
	std::cout << std::endl;

	Billy.highFivesGuys();
	John.highFivesGuys();
	std::cout << std::endl;

	Billy.whoAmI();
	John.whoAmI();
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}
