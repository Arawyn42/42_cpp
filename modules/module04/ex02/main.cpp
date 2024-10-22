/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:15:36 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 20:06:27 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	// This gives an error cause Animal is an abstract class
	// due to the fact it has a pure virtual function:
	// const Animal	*animal = new Animal();

	std::cout << "[DOG]\n";
	const Animal	*dog = new Dog();
	std::cout << "------------------------------\n";
	delete dog;
	
	std::cout << "\n[CAT]\n";
	const Animal	*cat = new Cat();
	std::cout << "------------------------------\n";
	delete cat;
	
	std::cout << "\n[ANIMALS ARRAY]\n";
	const Animal	*animals[6];
	for (int i = 0 ; i < 3 ; i++)
		animals[i] = new Dog();
	for (int i = 3 ; i < 6 ; i++)
		animals[i] = new Cat();
	std::cout << "------------------------------\n";
	for (int i = 0 ; i < 6 ; i++)
		delete animals[i];

	return (EXIT_SUCCESS);
}
