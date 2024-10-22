/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:23:35 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 15:02:57 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Billy("Billy");
	ClapTrap	John("John");

	std::cout << '\n';
	
	Billy.setAttackDamage(5);
	John.setAttackDamage(3);
	
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
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}
