/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:28:20 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 19:45:38 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
	#define SED_HPP

	#include <cstdlib>
	#include <iostream>
	#include <fstream>
	
	#define ARGS_ERROR "Invalid parameters. Usage:\n\t./prog <filename> <string1> <string2>\n\
The program will open the file <filename> and copy its content into a new file\n\
<filename>.replace, replacing every occurrence of <string1> with <string2>."
	#define OPEN_ERROR "Error: Unable to open file."
	#define EMPTY_FILE "Error: Empty file."

	void	errorExit(const std::string &msg);
	
	class	Sed
	{
		public:
			Sed(const char *fileName);
			~Sed();

			void	replaceBy(std::string oldString, std::string newString);
		private:
			std::string	_inFile;
			std::string	_outFile;
	};

#endif