/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:23:35 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 16:24:41 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	Billy("Billy");
	ScavTrap	John("John");

	std::cout << '\n';
		
	Billy.attack("John");
	John.takeDamage(Billy.getAttackDamage());
	std::cout << '\n';

	John.attack("Billy");
	Billy.takeDamage(John.getAttackDamage());
	std::cout << '\n';
	
	John.beRepaired(4);
	Billy.beRepaired(1);
	std::cout << '\n';

	Billy.attack("John");
	John.takeDamage(Billy.getAttackDamage());
	std::cout << '\n';

	John.attack("Billy");
	Billy.takeDamage(John.getAttackDamage());
	std::cout << '\n';

	Billy.attack("John");
	John.takeDamage(Billy.getAttackDamage());
	std::cout << '\n';

	John.attack("Billy");
	Billy.takeDamage(John.getAttackDamage());
	std::cout << '\n';
	
	Billy.attack("John");
	John.takeDamage(Billy.getAttackDamage());
	std::cout << std::endl;

	John.attack("Billy");
	Billy.takeDamage(John.getAttackDamage());
	std::cout << '\n';
	
	Billy.attack("John");
	John.takeDamage(Billy.getAttackDamage());
	std::cout << std::endl;

	John.attack("Billy");
	Billy.takeDamage(John.getAttackDamage());
	std::cout << '\n';
	
	Billy.attack("John");
	John.takeDamage(Billy.getAttackDamage());
	std::cout << std::endl;

	John.attack("Billy");
	std::cout << '\n';

	Billy.guardGate();
	John.guardGate();
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}
