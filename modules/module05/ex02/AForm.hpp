/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:08:05 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 21:38:18 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		/* Constructors */
		AForm(const std::string name, std::string target, const int gradeToSign, const int gradeToExecute);
		AForm(const AForm &toCopy);
		virtual ~AForm();

		/* Operators */
		AForm				&operator=(const AForm &toCopy);
		
		/* Getters and setters */
		const std::string	&getName() const;
		void				setName(const std::string name);
		const std::string	&getTarget() const;
		void				setTarget(const std::string target);
		bool				getIsSigned() const;
		void				setIsSigned(bool isSigned);
		const int			&getGradeToSign() const;
		void				setGradeToSign(const int gradeToSign);
		const int			&getGradeToExecute() const;
		void				setGradeToExecute(const int gradeToExecute);
		
		/* Members */
		void				beSigned(Bureaucrat &bureaucrat);
		void				execute(const Bureaucrat &executor) const;

		/* Exceptions */
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class notSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		/* Attributes */
		const std::string	_name;
		const std::string	_target;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

		/* Constructors */
		AForm();

		/* Members */
		virtual void		executeFormAction(const Bureaucrat &executor) const = 0;

};

std::ostream	&operator<<(std::ostream &stream, AForm &form);

#endif