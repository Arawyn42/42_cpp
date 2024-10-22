/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 09:28:12 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/04 15:24:59 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/* Prints an error message in red on STDERR */
void	printError(std::string msg)
{
	std::cerr << "\x1B[31m" << msg << "\033[0m" << std::endl;
}

/* Class constructor */
Contact::Contact()
{
	
}

/* Class destructor */
Contact::~Contact()
{
	
}

/* Creates a new contact */
void	Contact::create()
{
	this->firstName = this->getInput("First name: ");
	this->lastName = this->getInput("Last name: ");
	this->nickname = this->getInput("Nickname: ");
	this->phoneNumber = this->getInput("Phone number: ");
	this->darkestSecret = this->getInput("Darkest secret: ");
	std::cout << std::endl;
}

/* Returns true if the phone number is valid, false if not */
static bool	isValidPhoneNumber(std::string number)
{
	for (int i = 0 ; number[i] ; i++)
		if (number[i] < '0' || number[i] > '9')
		{
			printError("\t\tInvalid input. Please enter a valid phone number.");
			return (false);
		}
	if (number.length() != 10)
	{
		printError("\t\tInvalid input. Phone number must be 10 digits long.");
		return (false);
	}
	return (true);
}

/* Gets user inputs to create a contact */
std::string Contact::getInput(std::string str) const
{
	std::string	input = "";
	bool		valid = false;

	do
	{
		std::cout << "\t\t" << str << "\x1B[32m" << std::flush;
		std::getline(std::cin, input);
		std::cout << "\033[0m";
		if (std::cin.good() && !input.empty())
			valid = true;
		else
		{
			printError("\t\tInvalid input: empty field.");
			std::cin.clear();
			valid = false;
		}
		if (valid && !str.compare("Phone number: ") && !isValidPhoneNumber(input))
			valid = false;
	} while (!valid);
	return (input);
}

static void	formatString(std::string s)
{
	 if (s.size() > 10)
    {
        s = s.insert(9, ".");
        s = s.substr(0, 10);
    }
    else
        while (s.length() < 10)
            s = s.insert(0, " ");
    std::cout << s;
}

void	Contact::printContacts() const
{
	std::cout << "\t|         " << this->index << "|";
	formatString(this->firstName);
	std::cout << "|";
	formatString(this->lastName);
	std::cout << "|";
	formatString(this->nickname);
	std::cout << "|\n";
	std::cout << "\t|__________|__________|__________|__________|\n";
}

void	Contact::printContact() const
{
	std::cout << "\tFirst name: " << this->firstName << "\n";
	std::cout << "\tLast name: " << this->lastName << "\n";
	std::cout << "\tNickname: " << this->nickname << "\n";
	std::cout << "\tPhone number: " << this->phoneNumber << "\n";
	std::cout << "\tDarkest secret: " << this->darkestSecret << "\n";
}
