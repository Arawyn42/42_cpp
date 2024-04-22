/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:40:21 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 15:23:20 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/******************************** Constructors ********************************/
Bureaucrat::Bureaucrat()
{
	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	else
		setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy)
{
	if (this != &toCopy)
	{
		this->setName(toCopy.getName());
		this->setGrade(toCopy.getGrade());
	}
}

Bureaucrat::~Bureaucrat()
{
	
}


/********************************* Operators **********************************/
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &toCopy)
{
	this->setName(toCopy.getName());
	this->setGrade(toCopy.getGrade());

	return (*this);
}


/**************************** Setters and getters *****************************/
const std::string	&Bureaucrat::getName() const
{
	return (this->_name);
}

void	Bureaucrat::setName(const std::string name)
{
	const_cast<std::string&>(this->_name) = name;
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
}


/********************************** Members ***********************************/
void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < HIGHEST_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->setGrade(this->_grade - 1);
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > LOWEST_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->setGrade(this->_grade + 1);
}

void	Bureaucrat::signForm(Form &form, bool isSigned)
{
	if (isSigned)
		std::cout << *this << " signed " << form << std::endl;
	else
		std::cout << *this << " couldn't sign " << form << " because his grade is too low." << std::endl;
}


/********************************* Exceptions *********************************/
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Exception error: Grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: Exception error: Grade too low!");
}


/***************************** External operators *****************************/
std::ostream	&operator<<(std::ostream &stream, Bureaucrat &bureaucrat)
{
	stream << MAGENTA << bureaucrat.getName() << END_COLOR << ", bureaucrat grade " << bureaucrat.getGrade();
	
	return (stream);
}
