/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:19:10 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/03 15:20:59 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/* Main from subject: */
/*#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/


int	main()
{
	{
		std::cout << "INT ARRAY:\n";
		Array<int>	arr(5);
		for (unsigned int i = 0 ; i < arr.size() ; i++)
			std::cout << "arr[" << i << "] = " << arr[i] << '\n';
		arr[0] = 2;
		arr[1] = 6;
		arr[2] = 20;
		arr[3] = 12;
		arr[4] = 3;
		std::cout << "Filling array with values:\n";
		for (unsigned int i = 0 ; i < arr.size() ; i++)
			std::cout << "arr[" << i << "] = " << arr[i] << '\n';
	}

	std::cout << std::endl;
	
	{
		Array<int>	arr(3);
		std::cout << "OUT OF BOUNDS:\n";
		try
		{
			arr[3] = 6;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
	std::cout << std::endl;
	
	{
		std::cout << "STRING ARRAY:\n";
		Array<std::string>	arr(5);
		for (unsigned int i = 0 ; i < arr.size() ; i++)
			std::cout << "arr[" << i << "] = " << arr[i] << '\n';
		arr[0] = "Ceci";
		arr[1] = "est";
		arr[2] = "un";
		arr[3] = "test";
		arr[4] = ".";
		std::cout << "Filling array with values:\n";
		for (unsigned int i = 0 ; i < arr.size() ; i++)
			std::cout << "arr[" << i << "] = " << arr[i] << '\n';
	}
	
	return (EXIT_SUCCESS);
}
