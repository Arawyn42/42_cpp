/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:05:02 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 02:17:01 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
	#define ZOMBIE_HPP
	
	#include <iostream>
	
	class Zombie
	{
		public:
			Zombie();
			~Zombie();
			
			void	announce();
			void	setName(std::string name);
		
		private:
			std::string	_name;
	};
	
	Zombie	*zombieHorde(int N, std::string name);

#endif