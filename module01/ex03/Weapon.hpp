/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:38:12 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 02:46:53 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
	#define WEAPON_HPP

	#include <iostream>
	
	class Weapon
	{
		public:
			Weapon(std::string type);
			~Weapon();

			const std::string	&getType();
			void				setType(std::string type);
		private:
			std::string _type;
	};
	
#endif