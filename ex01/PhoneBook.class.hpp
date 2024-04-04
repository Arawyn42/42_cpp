/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 09:03:01 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/04 17:08:21 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
	#define PHONEBOOK_CLASS_HPP
	#include "Contact.class.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	welcome() const;
		void	getCommand();
	private:
		Contact	contact[8];
		void	addContact();
		void	search() const;
		int		contacts;
};

#endif