/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:48:29 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 03:45:37 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
	#define HUMANB_HPP

	#include "Weapon.hpp"

	class	HumanB
	{
		public:
			HumanB(std::string name);
			~HumanB();
			
			void	setWeapon(Weapon &weapon);
			void	attack();
		private:
			std::string	_name;
			Weapon		*_weapon;
	};

#endif