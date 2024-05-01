/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:50:47 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/01 17:59:34 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include <cstdlib>

typedef struct s_data
{
	std::string	content;
}				Data;

class Serializer
{
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
	
	private:
		Serializer();
		Serializer(const Serializer &toCopy);
		Serializer	&operator=(const Serializer &toCopy);
		~Serializer();
};

#endif