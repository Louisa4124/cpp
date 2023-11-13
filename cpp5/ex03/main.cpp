/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:14:18 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/13 13:37:37 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int	main(void)
{
	std::cout << "*-------- Constructor test -------*" << std::endl << std::endl;

	Bureaucrat	b1("Smith", 15);
	Bureaucrat	b2("Smithus", 147);
	Bureaucrat	b3("Smithod", 1);
	Intern		pj;

	AForm*	f1 = pj.makeForm("shrubbery creation", "here");
	AForm*	f2 = pj.makeForm("robotomy request", "Julien");
	AForm*	f3 = pj.makeForm("presidential pardon", "Sasha");
	
	std::cout << std::endl;
	std::cout << "*-------- Tests -------*" << std::endl << std::endl;
	
	try 
	{
		b1.executeForm(*f1);
		b1.signForm(*f1);
		b2.executeForm(*f1);
		b1.executeForm(*f1);
		b2.executeForm(*f2);
		b1.signForm(*f2);
		b1.executeForm(*f2);
		b1.signForm(*f3);
		b1.executeForm(*f3);
		b3.executeForm(*f3);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "*-------- Destructors -------*" << std::endl << std::endl;
	delete f1;
	delete f2;
	delete f3;
	return (0);
}