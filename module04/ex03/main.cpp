/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:10:24 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 22:33:30 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main()
{
	std::cout << GREEN << "\n[Creating a new materia source 'src'...]\n" << END_COLOR;
	IMateriaSource	*src = new MateriaSource();
	
	std::cout << GREEN << "\n[Learning Ice in 'src'...]\n" << END_COLOR;
	src->learnMateria(new Ice());
	
	std::cout << GREEN << "\n[Learning Cure in 'src'...]\n" << END_COLOR;
	src->learnMateria(new Cure());
	
	std::cout << GREEN << "\n[Creating a new character called 'me'...]\n" << END_COLOR;
	ICharacter	*me = new Character("me");

	std::cout << GREEN << "\n[Creating a new 'ice' materia...]\n" << END_COLOR;
	AMateria	*ice;
	ice = src->createMateria("Ice");
	
	std::cout << CYAN << "\n[Equipping 'ice' on 'me'...]\n" << END_COLOR;
	me->equip(ice);

	std::cout << GREEN << "\n[Creating a new 'cure' materia...]\n" << END_COLOR;
	AMateria	*cure;
	cure = src->createMateria("Cure");

	std::cout << CYAN << "\n[Equipping 'cure' on 'me'...]\n" << END_COLOR;
	me->equip(cure);
	
	std::cout << GREEN << "\n[Creating a new character called 'bob'...]\n" << END_COLOR;
	ICharacter	*bob = new Character("bob");
	
	std::cout << CYAN << "\n[Using slot 0 from 'me' on 'bob'...]\n" << END_COLOR;
	me->use(0, *bob);
	
	std::cout << CYAN << "\n[Using slot 1 from 'me' on 'bob'...]\n" << END_COLOR;
	me->use(1, *bob);
	
	std::cout << CYAN << "\n[Using slot 2 from 'me' on 'bob'...]\n" << END_COLOR;
	me->use(2, *bob);

	std::cout << MAGENTA << "\n[Unequipping slot 2...]\n" << END_COLOR;
	me->unequip(2);
	
	std::cout << MAGENTA << "\n[Unequipping slot 1...]\n" << END_COLOR;
	me->unequip(1);
	
	std::cout << MAGENTA << "\n[Unequipping slot 0...]\n" << END_COLOR;
	me->unequip(0);
	
	std::cout << RED << "\n[Deleting 'bob'...]\n" << END_COLOR;
	delete bob;
	
	std::cout << RED << "\n[Deleting 'me'...]\n" << END_COLOR;
	delete me;
	
	std::cout << RED << "\n[Deleting 'src'...]\n" << END_COLOR;
	delete src;
	
	std::cout << RED << "\n[Deleting 'ice'...]\n" << END_COLOR;
	delete ice;
	
	std::cout << RED << "\n[Deleting 'cure'...]\n" << END_COLOR;
	delete cure;

	return (EXIT_SUCCESS);
}
