/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:14:18 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/08 15:04:33 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat agent = Bureaucrat("Christine", 130);
	std::cout << agent << std::endl;

	try {
		Form fm_toohigh("FormA1", 0, 100);
		std::cout << fm_toohigh;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Form fm_toohigh2("FormA1", 1, 0);
		std::cout << fm_toohigh2;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Form fm_toolow("FormA1", 151, 100);
		std::cout << fm_toolow;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Form fm_toolow2("FormA1", 100, 151);
		std::cout << fm_toolow2;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Form fm_fail_to_sign("FormA2", 120, 10);
		std::cout << fm_fail_to_sign;
		fm_fail_to_sign.beSigned(agent);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Form fm_fail_achieve_to_sign("FormA2", 130, 10);
		std::cout << fm_fail_achieve_to_sign;
		fm_fail_achieve_to_sign.beSigned(agent);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Form fm_fail_fail_to_sign2("FormA2", 120, 10);
		std::cout << fm_fail_fail_to_sign2;
		agent.signForm(fm_fail_fail_to_sign2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Form fm_fail_achieve_to_sign2("FormA2", 130, 10);
		std::cout << fm_fail_achieve_to_sign2;
		agent.signForm(fm_fail_achieve_to_sign2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "*---------Other tests----------*" << std::endl << std::endl;
	std::cout << "Constructor test" << std::endl;
	try 
	{	
		Form	f("AB-41", 141, 5);
		std::cout << f << std::endl;

		Form	e("AB-41", 141, 5);
		std::cout << e << std::endl;
		std::cout << e << std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{	
		Form	f("AB-43", 159, 5);
		std::cout << f << std::endl;

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{	
		Form	f("AB-49", -5, 5);
		std::cout << f << std::endl;

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	b1("Smith", 15);
		Bureaucrat	b2("Smithus", 147);

		Form	f1("AC-12", 97, 13);
		Form	f2("AC-15", 15, 1);

		b1.signForm(f1);
		b2.signForm(f1);
		b2.signForm(f2);
		b2.signForm(f1);
		std::cout << f1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}