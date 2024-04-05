/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:12:05 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 21:24:34 by drenassi         ###   ########.fr       */
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
	std::cout << "\tHarl says:\n\t" << GREEN << "\"I love having extra ";
	std::cout << "bacon for my 7XL-double-cheese-triple-pickle-specialketchup ";
	std::cout << "burger.\nI really do!\"" << END_COLOR << std::endl;
}

void	Harl::info()
{
	std::cout << "\tHarl says:\n\t" << YELLOW << "\"I cannot believe adding extra ";
	std::cout << "bacon costs more money.\nYou didn't put enough bacon in my ";
	std::cout << "burger!\nIf you did, I wouldn't be asking for more!\"";
	std::cout << END_COLOR << std::endl;
}

void	Harl::warning()
{
	std::cout << "\tHarl says:\n\t" << RED << "\"I think I deserve to have some ";
	std::cout << "extra bacon for free.\nI've been coming for years whereas you ";
	std::cout << "started working here since last month.\"" << END_COLOR << std::endl;
}

void	Harl::error()
{
	std::cout << "\tHarl says:\n\t" << MAGENTA << "\"This is unacceptable!\nI want ";
	std::cout << "to speak to the manager now.\"" << END_COLOR << std::endl;
}

void	Harl::complain(std::string level)
{
	HarlFunction	functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0 ; i < 4 ; i++)
		if (level == levels[i])
			(this->*functions[i])();
}
