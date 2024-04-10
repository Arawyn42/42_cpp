/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:58:33 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/10 19:30:02 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

 class	DiamondTrap : public ScavTrap, public FragTrap
 {
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &diamondTrap);
		DiamondTrap	&operator=(const DiamondTrap &diamondTrap);
		~DiamondTrap();

		using	ScavTrap::attack;
		void	whoAmI();
		
	private:
		std::string	_name;
	
 };

#endif