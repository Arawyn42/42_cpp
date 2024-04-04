/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 09:02:41 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/04 15:33:24 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main()
{
	PhoneBook	phoneBook;

	phoneBook.welcome();
	while (1)
		phoneBook.getCommand();
	return (EXIT_SUCCESS);
}
