/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:43:03 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/13 13:24:09 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("default")
{	
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), 
													_target(target)
{	
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy) : AForm("PresidentialPardonForm", 25, 5), 
																	_target(cpy._target)
{
	std::cout << "Copy constructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& cpy) 
{
	if (this == &cpy)
		return (*this);
	_target = cpy._target;
	std::cout << "Default Operator called" << std::endl;
	return (*this);
};

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->canExec(executor.getGrade());
	std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
