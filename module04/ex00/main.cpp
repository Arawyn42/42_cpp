/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:15:36 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:19:15 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	}
	{
	std::cout << "\n[WrongAnimal / WrongCat]" << std::endl;

	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	delete meta;
	delete cat;
	}

	return (EXIT_SUCCESS);
}
