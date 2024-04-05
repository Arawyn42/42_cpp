/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 20:07:45 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 20:53:06 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
	#define HARL_HPP

	#include <cstdlib>
	#include <iostream>

	#define END_COLOR	"\033[0m"
	#define RED			"\033[31m"
	#define GREEN		"\033[32m"
	#define YELLOW		"\033[33m"
	#define BOLDBLUE	"\033[1m\033[34m"
	#define MAGENTA		"\033[35m"
	#define CYAN		"\033[36m"

	class	Harl
	{
		public:
			Harl();
			~Harl();
		
			void	complain(std::string level);
		private:
			void	debug();
			void	info();
			void	warning();
			void	error();
	};

	/* typedef [type] (Class::*PointerName)(args) */
	typedef void	(Harl::*HarlFunction)();

#endif