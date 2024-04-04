/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:13:11 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/04 08:43:32 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1 ; av[i] ; i++)
    {
        for (int j = 0 ; av[i][j] ; j++)
            std::cout << (char) std::toupper(av[i][j]);
        std::cout << ' ';
    }
    std::cout << std::endl;
    return (0);
}
