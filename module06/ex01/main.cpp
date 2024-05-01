/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:04:21 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/01 17:23:33 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data		data;
	uintptr_t	ptr;
	
	data.content = "Hello world";
	ptr = Serializer::serialize(&data);

	std::cout << "Data adress: " << &data << std::endl;
	std::cout << "Data content: " << data.content << '\n' << std::endl;

	std::cout << "Ptr value: " << ptr << '\n' << std::endl;

	Data	*deserialized = Serializer::deserialize(ptr);

	std::cout << "Deserialized data adress: " << deserialized << std::endl;
	std::cout << "Deserialized data content: " << deserialized->content << std::endl;

	return (EXIT_SUCCESS);
}
