/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:41:40 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/13 11:13:59 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("default Shrubbery", 72, 45), _target("default")
{	
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("default Shrubbery", 72, 45), 
													_target(target)
{	
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm("copy Shrubbery", 72, 45)
{
	(void) cpy;
	std::cout << "Copy constructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& cpy) 
{
	if (this == &cpy)
		return (*this);
	std::cout << "Default Operator called" << std::endl;
	return (*this);
};

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int i;

	this->canExec(executor.getGrade());
	srand (time(NULL));
	i = rand() % 2;
	std::cout << "*** Drilling noises ***" << std::endl;
	if (i == 0)
		std::cout << this->_target << " has been Robotomized successfully!" << std::endl;
	else
		std::cout << "The Robotomy failed" << std::endl;
}
