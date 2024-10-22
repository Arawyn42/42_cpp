/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:28:45 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 19:55:15 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const char *fileName) : _inFile(fileName), _outFile(this->_inFile + ".replace")
{
	
}

Sed::~Sed()
{
	
}

void	Sed::replaceBy(std::string oldString, std::string newString)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		content;

	/* Open input file and output file */
	inFile.open(this->_inFile.c_str());
	outFile.open(this->_outFile.c_str());
	if (!inFile.is_open() || !outFile.is_open())
		errorExit(OPEN_ERROR);
	
	/* Store input file content in a string */
	std::getline(inFile, content, '\0');
	if (content.empty())
		errorExit(EMPTY_FILE);
	inFile.close();
	
	/* Search and replace oldString by newString in the content string */
	for (int pos = content.find(oldString) ; pos != -1 ; pos = content.find(oldString))
	{
		content.erase(pos, oldString.length());
		content.insert(pos, newString);
	}

	/* Write the content string into the output file */
	outFile << content;
	outFile.close();
	std::cout << this->_outFile << " was created." << std::endl;
}
