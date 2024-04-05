/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorExit.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:44:31 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/05 17:37:14 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

void	errorExit(const std::string &msg)
{
	std::cerr << msg << std::endl;
	std::exit(EXIT_FAILURE);
}
