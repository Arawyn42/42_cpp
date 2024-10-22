/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:08:55 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/24 21:58:37 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/******************************** Constructors ********************************/
AForm::AForm() : _name("DefaultForm"), _target("default"), _isSigned(false),
				_gradeToSign(LOWEST_GRADE), _gradeToExecute(LOWEST_GRADE)
{
	
}

AForm::AForm(const std::string name, const std::string target, const int gradeToSign, const int gradeToExecute) :
	_name(name), _target(target), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw (AForm::GradeTooHighException());
	else if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(const AForm &toCopy) :
	_name(toCopy._name), _isSigned(toCopy._isSigned),
	_gradeToSign(toCopy.getGradeToSign()), _gradeToExecute(toCopy.getGradeToExecute())
{
	
}

AForm::~AForm()
{
	
}


/********************************* Operators **********************************/
AForm	&AForm::operator=(const AForm &toCopy)
{
	this->setName(toCopy.getName());
	this->setTarget(toCopy.getTarget());
	this->setIsSigned(toCopy.getIsSigned());
	this->setGradeToSign(toCopy.getGradeToSign());
	this->setGradeToExecute(toCopy.getGradeToExecute());

	return (*this);
}


/**************************** Setters and getters *****************************/
const std::string	&AForm::getName() const {	return (this->_name);	}
void	AForm::setName(const std::string name) {	const_cast<std::string&>(this->_name) = name;	}

const std::string	&AForm::getTarget() const {	return (this->_target);	}
void	AForm::setTarget(const std::string target) {	const_cast<std::string&>(this->_target) = target;	}

bool	AForm::getIsSigned() const {	return (this->_isSigned);	}
void	AForm::setIsSigned(bool isSigned) {	this->_isSigned = isSigned;	}

const int	&AForm::getGradeToSign() const {	return (this->_gradeToSign);	}
void	AForm::setGradeToSign(const int gradeToSign) {	const_cast<int&>(this->_gradeToSign) = gradeToSign;	}

const int	&AForm::getGradeToExecute() const {	return (this->_gradeToExecute);	}
void	AForm::setGradeToExecute(const int gradeToExecute) {	const_cast<int&>(this->_gradeToExecute) = gradeToExecute;	}


/********************************** Members ***********************************/
void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		setIsSigned(true);
	else
		throw (AForm::GradeTooLowException());
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw (AForm::notSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (Bureaucrat::GradeTooLowException());
	else
		this->executeFormAction(executor);
}


/********************************* Exceptions *********************************/
const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Exception error: Form: Grade too high!");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Exception error: Form: Grade too low!");
}

const char	*AForm::notSignedException::what() const throw()
{
	return ("Exception error: Form: Must be signed to be executed!");
}


/***************************** External operators *****************************/
std::ostream	&operator<<(std::ostream &stream, AForm &form)
{
	stream << CYAN << form.getName() << END_COLOR << " (target '";
	stream << form.getTarget() << "', ";
	if (form.getIsSigned())
		stream << GREEN << "signed" << END_COLOR;
	else
		stream << RED << "not signed" << END_COLOR;
	stream << ", grade to sign " << form.getGradeToSign() << ", grade to execute ";
	stream << form.getGradeToExecute() << ")";
	
	return (stream);
}

