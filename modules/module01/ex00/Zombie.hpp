/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:43:17 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 02:14:12 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
	#define ZOMBIE_HPP
	
	#include <iostream>
	
	class Zombie
	{
		public:
			Zombie(std::string name);
			~Zombie();
			
			void	announce();
		
		private:
			std::string	_name;
	};
	
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);

#endif