/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:12:05 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 21:37:35 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}

void	Harl::debug()
{
	std::cout << "\t[ DEBUG ]\n\t" << GREEN << "\"I love having extra ";
	std::cout << "bacon for my 7XL-double-cheese-triple-pickle-specialketchup ";
	std::cout << "burger.\n\tI really do!\"" << END_COLOR << std::endl;
}

void	Harl::info()
{
	std::cout << "\t[ INFO ]\n\t" << YELLOW << "\"I cannot believe adding extra ";
	std::cout << "bacon costs more money.\n\tYou didn't put enough bacon in my ";
	std::cout << "burger!\n\tIf you did, I wouldn't be asking for more!\"";
	std::cout << END_COLOR << std::endl;
}

void	Harl::warning()
{
	std::cout << "\t[ WARNING ]\n\t" << RED << "\"I think I deserve to have some ";
	std::cout << "extra bacon for free.\n\tI've been coming for years whereas you ";
	std::cout << "started working here since last month.\"" << END_COLOR << std::endl;
}

void	Harl::error()
{
	std::cout << "\t[ ERROR ]\n\t" << MAGENTA << "\"This is unacceptable!\n\tI want ";
	std::cout << "to speak to the manager now.\"" << END_COLOR << std::endl;
}

void	Harl::complain(std::string level)
{
	HarlFunction	functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0 ; i < 4 ; i++)
	{
		if (level == levels[i])
		{
			switch (i)
			{
				case 0:
					(this->*functions[0])();
					std::cout << "\n";
					(this->*functions[1])();
					std::cout << "\n";
					(this->*functions[2])();
					std::cout << "\n";
					(this->*functions[3])();
					return ;
				case 1:
					(this->*functions[1])();
					std::cout << "\n";
					(this->*functions[2])();
					std::cout << "\n";
					(this->*functions[3])();
					return ;
				case 2:
					(this->*functions[2])();
					std::cout << "\n";
					(this->*functions[3])();
					return ;
				case 3:
					(this->*functions[3])();
					return ;
				default:
					return ;
			}
			
		}
	}
}
