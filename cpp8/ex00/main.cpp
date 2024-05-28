/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:42:14 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 14:08:21 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main(void)
{
	int	base[10] = {25, 48, 1, 96, 51, 2, 23, 78, 741, 0};
	
	std::vector<int>	v(base, base + sizeof(base) / sizeof(int));
	std::list<int>		l(base, base + sizeof(base) / sizeof(int));

	std::cout << "*------ Valid Number Vector ------*" << std::endl;
	int	val = 96;
	std::cout << "val : " << val << std::endl;
	try
	{
		easyfind(v, val);
		std::cout << val << " found !" << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}
    
    std::cout << std::endl;
    std::cout << "*------ Invalid Number Vector ------*" << std::endl;
    val = 14;
	std::cout << "val : " << val << std::endl;
	try
	{
		easyfind(v, val);
		std::cout << val << " found !" << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}
    
    std::cout << std::endl;
    std::cout << "*------ Valid Number List ------*" << std::endl;
    val = 96;
	std::cout << "val : " << val << std::endl;
	try
	{
		easyfind(l, val);
		std::cout << val << " found !" << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}		

    std::cout << std::endl;
    std::cout << "*------ Invalid Number List ------*" << std::endl;
    val = 14;
	std::cout << "val : " << val << std::endl;
    try
	{
		easyfind(l, val);
		std::cout << val << " found !" << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << '\n';
	}		

}
