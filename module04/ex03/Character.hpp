/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:40:30 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 20:51:46 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		// Constructors
		Character();
		Character(const std::string &name);
		Character(const Character &toCopy);
		~Character();

		// Operators
		Character& operator=(const Character &toCopy);

		// Setters and getters
		const std::string& getName() const;

		// Members
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		
	private:
		std::string		_name;
		AMateria		*_inventory[4];
		int				_equipped;
};

#endif