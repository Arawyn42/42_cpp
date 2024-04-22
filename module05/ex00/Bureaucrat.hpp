/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:25:24 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/22 11:23:23 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <cstdlib>
# include <iostream>

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class Bureaucrat
{
	public:
		/* Constructors */
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &toCopy);
		~Bureaucrat();

		/* Operators */
		Bureaucrat	&operator=(const Bureaucrat &toCopy);

		/* Setters and getters */
		const std::string	&getName() const;
		void		setName(const std::string name);
		int			getGrade() const;
		void		setGrade(int grade);

		/* Members */
		void		incrementGrade();
		void		decrementGrade();

		/* Exceptions handlers */
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &stream, Bureaucrat &bureaucrat);

#endif