/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:33:22 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 21:57:26 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/******************************** Constructors ********************************/
PresidentialPardonForm::PresidentialPardonForm() :
	AForm("PresidentialPardonForm", "default", 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("PresidentialPardonForm", target, 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCopy) :
	AForm(toCopy.getName(), toCopy.getTarget(), toCopy.getGradeToSign(), toCopy.getGradeToExecute())
{
	this->setIsSigned(toCopy.getIsSigned());
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

/********************************* Operators **********************************/
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &toCopy)
{
	this->setName(toCopy.getName());
	this->setTarget(toCopy.getTarget());
	this->setIsSigned(toCopy.getIsSigned());
	this->setGradeToSign(toCopy.getGradeToSign());
	this->setGradeToExecute(toCopy.getGradeToExecute());

	return (*this);
}

/********************************** Members ***********************************/
void	PresidentialPardonForm::executeFormAction(Bureaucrat const &executor) const
{
	std::ofstream	file;
	file.open((this->getTarget() + "_pardoned").c_str(), std::ofstream::in | std::ofstream::trunc);
	file << "                          oooo$$$$$$$$$$$$oooo\n"
		<<	"                      oo$$$$$$$$$$$$$$$$$$$$$$$$o\n"
		<<	"                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$\n"
		<<	"   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$\n"
		<<	"oo $ $ \"$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$\n"
		<<	"\"$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$\n"
		<<	"  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$\n"
		<<	"  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  \"\"\"$$$\n"
		<<	"   \"$$$\"\"\"\"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$\n"
		<<	"    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$o\n"
		<<	"   o$$\"   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o\n"
		<<	"   $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" "$$$$$$ooooo$$$$o\n"
		<<	"  o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$\n"
		<<	"  $$$$$$$$\"$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$\"\"\"\"\"\"\"\"\n"
		<<	" \"\"\"\"       $$$$    \"$$$$$$$$$$$$$$$$$$$$$$$$$$$$\"      o$$$\n"
		<<	"            \"$$$o     \"\"\"$$$$$$$$$$$$$$$$$$\"$$\"         $$$\n"
		<<	"              $$$o          \"$$\"\"$$$$$$\"\"\"\"           o$$$\n"
		<<	"               $$$$o                                o$$$\"\n"
		<<	"                \"$$$$o      o$$$$$$o\"$$$$o        o$$$$\n"
		<<	"                  \"$$$$$oo     \"\"$$$$o$$$$$o   o$$$$\"\"\n"
		<<	"                     \"\"$$$$$oooo  \"$$$o$$$$$$$$$\"\"\"\n"
		<<	"                        \"\"$$$$$$$oo $$$$$$$$$$\n"
		<<	"                                \"\"\"\"$$$$$$$$$$$\n"
		<<	"                                    $$$$$$$$$$$$\n"
		<<	"                                     $$$$$$$$$$\"\n"
		<<	"                                      \"$$$\"\"\"\"\"\n";
	file.close();
	std::cout << executor.getName() << " executed " << this->getName() << ". " << this->getTarget();
	std::cout << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
