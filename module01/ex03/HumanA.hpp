/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:47:19 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 03:17:17 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
	#define HUMANA_HPP

	#include "Weapon.hpp"

	class	HumanA
	{
		public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA();
			
			void	setWeapon(Weapon weapon);
			void	attack();
		private:
			std::string	_name;
			Weapon		&_weapon;
	};

#endif