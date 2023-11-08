/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:23:28 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/08 15:06:00 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : 	_name("name"),
						_gradeSign(10),
						_gradeExec(10), 
						_signed(false)
{	
	std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name),
															 _gradeSign(gradeSign),
															 _gradeExec(gradeExec), 
															 _signed(false)
{
	if (_gradeSign > 150)
		throw (AForm::GradeTooLowException());
	if (_gradeSign < 1)
		throw (AForm::GradeTooHighException());
	if (_gradeExec > 150)
		throw (AForm::GradeTooLowException());
	if (_gradeExec < 1)
		throw (AForm::GradeTooHighException());
	std::cout << "AForm constructor called" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const AForm& cpy) :	_name(cpy.getName()),
								_gradeSign(cpy.getGradeSign()),
								_gradeExec(cpy.getGradeExec()), 
								_signed(cpy.getSigned())
{
	std::cout << "Copy constructor called" << std::endl;
}

AForm&	AForm::operator=(const AForm& cpy) 
{
	if (this == &cpy)
		return (*this);
	std::cout << "Default Operator called" << std::endl;
	return (*this);
};

void	AForm::beSigned(Bureaucrat &b)
{
	if (this->_signed == true)
		return ;
	else if (b.getGrade() < this->getGradeSign())
	{
		this->_signed = true;
		std::cout << b.getName() << " has signed the " << getName() << " AForm" << std::endl;
	}
	else
		throw GradeTooLowException();
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

int 		AForm::getGradeExec(void) const
{
	return (this->_gradeExec);
}

int			AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

bool		AForm::getSigned(void) const
{
	return (this->_signed);
}

std::ostream& operator<<(std::ostream& ostream, AForm const& f)
{
	std::cout << f.getName() << " grade to execute is " << f.getGradeExec();
	std::cout << ", grade to sign is " << f.getGradeSign();
	if (f.getSigned() == true)
		std::cout << " and it is signed" << std::endl;
	else
		std::cout << " and it is not signed" << std::endl;
	return (ostream);
}
