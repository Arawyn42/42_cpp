/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 03:05:03 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 18:52:09 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(5, 5);
	Point	p[5] = {Point(5, 4.9), Point(5, 5), Point(2.4f, 2.2f), Point(10, -1), Point()};

	std::cout << "\n\tTriangle ABC:\n\t";
	std::cout << "A" << a << " ";
	std::cout << "B" << b << " ";
	std::cout << "C" << c << "\n\n";
	for (int i = 0 ; i < 5 ; i++)
	{
		std::cout << CYAN << "\tP" << p[i] << END_COLOR << " is ";
		if (bsp(a, b, c, p[i]))
			std::cout << GREEN << "inside " << END_COLOR;
		else
			std::cout << RED << "outside " << END_COLOR;
		std::cout << "of the triangle.\n" << std::endl;
	}
	
	return (EXIT_SUCCESS);
}
