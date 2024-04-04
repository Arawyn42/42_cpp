/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 09:19:59 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/04 15:33:06 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
	#define CONTACT_CLASS_HPP

	#include <iostream>
	#include <sstream>
	#include <cstdlib>

	void	printError(std::string msg);

	class Contact
	{
		public:
			/* Constructors / Destructors */
			Contact();
			~Contact();
			
			/* Public attributes*/
			int			index;
			
			/* Public methods */
			void	create();
			void	printContacts() const;
			void	printContact() const;
		private:
			/* Private attributes */
			std::string	firstName;
			std::string	lastName;
			std::string	nickname;
			std::string	phoneNumber;
			std::string	darkestSecret;
			
			/* Private methods */
			std::string getInput(std::string str) const;
	};

#endif