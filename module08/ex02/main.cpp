/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 22:52:53 by drenassi          #+#    #+#             */
/*   Updated: 2024/05/10 02:41:53 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <list>
#include "MutantStack.hpp"

int	main()
{
	{
		MutantStack<int> mstack;
		
		mstack.push(5);
		std::cout << "5 pushed at the top of the stack.\n";
		mstack.push(17);
		std::cout << "\n17 pushed at the top of the stack.\n";
		
		std::cout << "\nFirst element: " << mstack.top() << std::endl;
		
		mstack.pop();
		std::cout << "\nTop element deleted.\n";
		std::cout << "\nStack's size:" << mstack.size() << std::endl;
		
		mstack.push(3);
		std::cout << "\n3 pushed at the top of the stack.\n";
		mstack.push(5);
		std::cout << "\n5 pushed at the top of the stack.\n";
		mstack.push(737);
		std::cout << "\n737 pushed at the top of the stack.\n";
		mstack.push(0);
		std::cout << "\n0 pushed at the top of the stack.\n";
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		std::cout << "\nIterators:\n";
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		
		std::stack<int> s(mstack);
	}
	
	std::cout << "\nSame test with std::list:\n\n";

	{
		std::list<int> list;
		
		list.push_back(5);
		std::cout << "5 pushed at the top of the stack.\n";
		list.push_back(17);
		std::cout << "\n17 pushed at the top of the stack.\n";
		
		std::cout << "\nFirst element: " << list.back() << std::endl;
		
		list.pop_back();
		std::cout << "\nTop element deleted.\n";
		std::cout << "\nStack's size:" << list.size() << std::endl;
		
		list.push_back(3);
		std::cout << "\n3 pushed at the top of the stack.\n";
		list.push_back(5);
		std::cout << "\n5 pushed at the top of the stack.\n";
		list.push_back(737);
		std::cout << "\n737 pushed at the top of the stack.\n";
		list.push_back(0);
		std::cout << "\n0 pushed at the top of the stack.\n";
		
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		
		++it;
		--it;
		std::cout << "\nIterators:\n";
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		
		std::list<int> s(list);
	}
	
	return (EXIT_SUCCESS);
}
