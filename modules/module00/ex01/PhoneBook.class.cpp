/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 08:50:32 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/04 17:08:14 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
	this->contacts = 0;
	for (int i = 0 ; i < 8 ; i++)
		this->contact[i].index = -1;
}

PhoneBook::~PhoneBook()
{
	
}

/* Prints a welcome message when the user open the phone book */
void	PhoneBook::welcome() const
{
	std::cout << "\x1B[32m\n\t*********************************************************\n";
	std::cout << "\t*\t\tWelcome on your phone book.\t\t*\n";
	std::cout << "\t*\t    You don't have any contact for now.\t\t*\n";
	std::cout << "\t*********************************************************\n\033[0m\n";
	std::cout << "\tYou have access to the following commands:\n\n";
	std::cout << "\tADD\t\tAdd a new contact in your phone book.\n";
	std::cout << "\tSEARCH\t\tPrint a contact's informations.\n";
	std::cout << "\tEXIT\t\tExit (all contacts will be lost).\n" << std::endl;
}

/* Gets a command from the user and executes it if the command is valid */
void	PhoneBook::getCommand()
{
	std::string	command = "";
	bool		valid = true;

	do
	{
		if (!valid)
			printError("\tInvalid command... Please enter a valid command:");
		else
			std::cout << "\tPlease enter a command:" << std::endl;
		std::cout << "\t> \x1B[32m";
		std::getline(std::cin, command);
		std::cout << "\033[0m" << std::endl;
		valid = (command.compare("ADD") && command.compare("SEARCH") && command.compare("EXIT")) ? false : true;
	} while (!valid);
	if (!command.compare("ADD"))
		addContact();
	else if (!command.compare("SEARCH"))
		search();
	else if (!command.compare("EXIT"))
		std::exit(EXIT_SUCCESS);
}

/* Adds a new contact into the phone book */
void	PhoneBook::addContact()
{
	Contact	contact;

	std::cout << "\tLet's add a new contact:\n" << std::endl;
	contact.create();
	for (int i = 0 ; i < 8 ; i++)
	{
		if (this->contacts < 8 && this->contact[i].index == -1)
		{
			contact.index = i + 1;
			this->contact[i] = contact;
			break ;
		}
		else if (this->contacts >= 8)
		{
			for (int j = 1 ; j < 8 ; j++)
			{
				this->contact[j - 1] = this->contact[j];
				this->contact[j - 1].index--;
			}
			contact.index = 8;
			this->contact[7] = contact;
			break ;
		}
	}
	if (this->contacts < 8)
		this->contacts++;
	std::cout << "\tYour contact has been added. You have " << this->contacts << " contacts.\n" << std::endl;
}

void	PhoneBook::search() const
{
	std::string	id = "";
	bool		valid = true;
	int			i;

	if (!this->contacts)
		std::cout << "\tYou don't have any contact. Please add contacts first!\n";
	else
	{
		std::cout << "\t ___________________________________________\n";
		std::cout << "\t|        ID|First name| Last name|  Nickname|\n";
		std::cout << "\t|__________|__________|__________|__________|\n";
		for (int i = 0 ; i < 8 ; i++)
			if (this->contact[i].index != -1)
				this->contact[i].printContacts();
		do
		{
			if (!valid)
				printError("\tInvalid ID... Please enter a valid ID.");
			else
				std::cout << "\n\tEnter the ID of the contact that you want to display:" << std::endl;
			std::cout << "\t> \x1B[32m";
			std::getline(std::cin, id);
			std::cout << "\033[0m" << std::endl;
			std::istringstream(id) >> i;
			valid = (id.length() != 1 || i < 1 || i > this->contacts) ? false : true;
		} while (!valid);
		this->contact[i - 1].printContact();
	}
	std::cout << std::endl;
}
