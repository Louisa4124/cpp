/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:14:18 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/08 13:03:08 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "*--------Constructor test---------*" << std::endl;
	std::cout << std::endl;
	try 
	{	
		Bureaucrat	b("Smith", 141);
		std::cout << b << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{	
		Bureaucrat	b("Smithons", 1141);
		std::cout << b << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{	
		Bureaucrat	b("Smithus", 0);
		std::cout << b << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "*---------Increment/decrement test----------*" << std::endl;
	std::cout << std::endl;
	
	Bureaucrat	b("Smithus", 3);
	try 
	{	
		std::cout << b << std::endl;
		b.promotion();
		std::cout << b << std::endl;
		b.promotion();
		std::cout << b << std::endl;
		b.promotion();
		std::cout << b << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat	c("Smithon", 148);
	try 
	{	
		std::cout << c << std::endl;
		c.retrograde();
		std::cout << c << std::endl;
		c.retrograde();
		std::cout << c << std::endl;
		c.retrograde();
		std::cout << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "*---------Constructor test----------*" << std::endl;
	std::cout << std::endl;
	try 
	{	
		Bureaucrat d("bob", 10000);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{	
		Bureaucrat e("boby", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}


	
	return (0);
}