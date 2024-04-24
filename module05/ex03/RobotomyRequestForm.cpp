/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:58:15 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 23:05:53 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/******************************** Constructors ********************************/
RobotomyRequestForm::RobotomyRequestForm() :
	AForm("RobotomyRequestForm", "default", 72, 45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RobotomyRequestForm", target, 72, 45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy) :
	AForm(toCopy.getName(), toCopy.getTarget(), toCopy.getGradeToSign(), toCopy.getGradeToExecute())
{
	this->setIsSigned(toCopy.getIsSigned());
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

/********************************* Operators **********************************/
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &toCopy)
{
	this->setName(toCopy.getName());
	this->setTarget(toCopy.getTarget());
	this->setIsSigned(toCopy.getIsSigned());
	this->setGradeToSign(toCopy.getGradeToSign());
	this->setGradeToExecute(toCopy.getGradeToExecute());

	return (*this);
}

/********************************** Members ***********************************/
void	RobotomyRequestForm::executeFormAction(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw (AForm::notSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		std::srand(std::time(NULL));
		std::cout << "BzzZzdrRrzZZzzZbZZrrrZzzzzzzZZZZ..." << std::endl;
		if (std::rand() % 2)
		{
			std::ofstream	file;
			file.open((this->getTarget() + "_robotomized").c_str(), std::ofstream::in | std::ofstream::trunc);
			file << "                                         |\n"
				<<	"                                         |\n"
				<<	"                                         |\n"
				<<	"                                         |\n"
				<<	"   _______                   ________    |\n"
				<<	"  |ooooooo|      ____       | __  __ |   |\n"
				<<	"  |[]+++[]|     [____]      |/  \\/  \\|   |\n"
				<<	"  |+ ___ +|     ]()()[      |\\__/\\__/|   |\n"
				<<	"  |:|   |:|   ___\\__/___    |[][][][]|   |\n"
				<<	"  |:|___|:|  |__|    |__|   |++++++++|   |\n"
				<<	"  |[]===[]|   |_|_/\\_|_|    | ______ |   |\n"
				<<	"_ ||||||||| _ | | __ | | __ ||______|| __|\n"
				<<	"  |_______|   |_|[::]|_|    |________|   \\\n"
				<<	"              \\_|_||_|_/                  \\\n"
				<<	"                |_||_|                     \\\n"
				<<	"               _|_||_|_                     \\\n"
				<<	"      ____    |___||___|                     \\\n"
				<<	"     /  __\\          ____                     \\\n"
				<<	"     \\( oo          (___ \\                     \\\n"
				<<	"     _\\_o/           oo~)/\n"
				<<	"    / \\|/ \\         _\\-_/_\n"
				<<	"   / / __\\ \\___    / \\|/  \\\n"
				<<	"   \\ \\|   |__/_)  / / .- \\ \\\n"
				<<	"    \\/_)  |       \\ \\ .  /_/\n"
				<<	"     ||___|        \\/___(_/\n"
				<<	"     | | |          | |  |\n"
				<<	"     | | |          | |  |\n"
				<<	"     |_|_|          |_|__|\n"
				<<	"     [__)_)        (_(___]        R080T0M1Z3D...\n";
			file.close();
			std::cout << executor.getName() << " executed " << this->getName() << ". " << this->getTarget();
			std::cout << " has been robotomized." << std::endl;
		}
		else
		{
			std::cout << executor.getName() << " tried to execute " << this->getName() << " but it failed... ";
			std::cout << this->getTarget() << "'s robotomy failure!";
		}
	}
}