/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:24:37 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/21 19:30:46 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &toCopy);
		~Brain();
		
		// Operators
		Brain &operator=(const Brain &toCopy);
	
	private:
		std::string	ideas[100];
};



#endif