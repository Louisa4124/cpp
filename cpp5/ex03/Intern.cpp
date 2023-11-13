/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:23:39 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/13 12:40:09 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& cpy)
{
    (*this) = cpy;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& cpy)
{
    if (this == &cpy)
		return (*this);
	std::cout << "Default Operator called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
    std::cout << "Intern default destructor called" << std::endl;
}

AForm* Intern::makePardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(std::string formType, std::string target)
{
    int i = 0;
    std::string types[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    AForm* (Intern::*functions[3])(std::string) = {&Intern::makePardon, &Intern::makeRobotomy, &Intern::makeShrubbery};
	
    while (i < 3 && types[i] != formType)
	{
        i++;
	}
	if (i == 3)
	{
		std::cout << "Error : this type of form isn't existing" << std::endl;
		return (NULL);
	}
    std::cout << "Inter creates " << formType << std::endl;
    return (this->*functions[i])(target);
}