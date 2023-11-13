/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:41:40 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/13 13:27:51 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("default")
{	
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), 
													_target(target)
{	
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm("RobotomyRequestForm", 72, 45),
														_target(cpy._target)
{
	std::cout << "Copy constructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& cpy) 
{
	if (this == &cpy)
		return (*this);
	_target = cpy._target;
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
