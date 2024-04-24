/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:16:55 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 21:56:39 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/******************************** Constructors ********************************/
ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("ShrubberyCreationForm", "default", 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("ShrubberyCreationForm", target, 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy) :
	AForm(toCopy.getName(), toCopy.getTarget(), toCopy.getGradeToSign(), toCopy.getGradeToExecute())
{
	this->setIsSigned(toCopy.getIsSigned());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

/********************************* Operators **********************************/
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCopy)
{
	this->setName(toCopy.getName());
	this->setTarget(toCopy.getTarget());
	this->setIsSigned(toCopy.getIsSigned());
	this->setGradeToSign(toCopy.getGradeToSign());
	this->setGradeToExecute(toCopy.getGradeToExecute());

	return (*this);
}

/********************************** Members ***********************************/
void	ShrubberyCreationForm::executeFormAction(Bureaucrat const &executor) const
{
	std::ofstream	file;
	file.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);
	file << "               ,@@@@@@@,\n"
		<<	"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		<<	"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		<<	"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		<<	"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		<<	"   %&&%/ %&%%&&@@\\ V /@@' '88\\8 '/88'\n"
		<<	"   '&%\\ ' /%&'    |.|        \\ '|8'\n"
		<<	"       |o|        | |         | |\n"
		<<	"       |.|        | |         | |\n"
		<<	"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
	file.close();
	std::cout << executor.getName() << " executed " << this->getName() << ". " << this->getTarget();
	std::cout << "_shrubbery has been created." << std::endl;
}
