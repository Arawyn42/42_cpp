/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:08:05 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 15:21:06 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		/* Constructors */
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		Form(const Form &toCopy);
		~Form();

		/* Operators */
		Form				&operator=(const Form &Form);
		
		/* Getters and setters */
		const std::string	&getName() const;
		void				setName(const std::string name);
		bool				getIsSigned() const;
		void				setIsSigned(bool isSigned);
		const int			&getGradeToSign() const;
		void				setGradeToSign(const int gradeToSign);
		const int			&getGradeToExecute() const;
		void				setGradeToExecute(const int gradeToExecute);
		
		/* Members */
		void				beSigned(Bureaucrat &bureaucrat);

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

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

};

std::ostream	&operator<<(std::ostream &stream, Form &form);

#endif