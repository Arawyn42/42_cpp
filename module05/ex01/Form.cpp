/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:08:55 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 21:34:01 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/******************************** Constructors ********************************/
Form::Form() : _name("Default form"), _isSigned(false),
				_gradeToSign(LOWEST_GRADE), _gradeToExecute(LOWEST_GRADE)
{
	
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) :
	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw (Form::GradeTooHighException());
	else if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &toCopy) :
	_name(toCopy._name), _isSigned(toCopy._isSigned),
	_gradeToSign(toCopy.getGradeToSign()), _gradeToExecute(toCopy.getGradeToExecute())
{
	
}

Form::~Form()
{
	
}


/********************************* Operators **********************************/
Form	&Form::operator=(const Form &toCopy)
{
	this->setName(toCopy.getName());
	this->setIsSigned(toCopy.getIsSigned());
	this->setGradeToSign(toCopy.getGradeToSign());
	this->setGradeToExecute(toCopy.getGradeToExecute());

	return (*this);
}


/**************************** Setters and getters *****************************/
const std::string	&Form::getName() const
{
	return (this->_name);
}

void	Form::setName(const std::string name)
{
	const_cast<std::string&>(this->_name) = name;
}

bool	Form::getIsSigned() const
{
	return (this->_isSigned);
}

void	Form::setIsSigned(bool isSigned)
{
	this->_isSigned = isSigned;
}

const int	&Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

void	Form::setGradeToSign(const int gradeToSign)
{
	const_cast<int&>(this->_gradeToSign) = gradeToSign;
}

const int	&Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	Form::setGradeToExecute(const int gradeToExecute)
{
	const_cast<int&>(this->_gradeToExecute) = gradeToExecute;
}


/********************************** Members ***********************************/
void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		setIsSigned(true);
	else
		throw (Form::GradeTooLowException());
}


/********************************* Exceptions *********************************/
const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form: Exception error: Grade too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form: Exception error: Grade too low!");
}


/***************************** External operators *****************************/
std::ostream	&operator<<(std::ostream &stream, Form &form)
{
	stream << CYAN << form.getName() << END_COLOR << " (";
	if (form.getIsSigned())
		stream << GREEN << "signed" << END_COLOR;
	else
		stream << RED << "not signed" << END_COLOR;
	stream << ", grade to sign " << form.getGradeToSign() << ", grade to execute ";
	stream << form.getGradeToExecute() << ")";
	
	return (stream);
}

