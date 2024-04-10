/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:23:35 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 17:08:12 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	Billy("Billy");
	FragTrap	John("John");

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

	Billy.highFivesGuys();
	John.highFivesGuys();
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}
