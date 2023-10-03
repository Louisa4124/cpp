/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:15:45 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 16:28:59 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "Default Wrong Animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	this->setType(cpy.getType());
	std::cout << "Copy Wrong Animal constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& cpy) 
{
	if (this == &cpy)
		return (*this);
	this->setType(cpy.getType());
	std::cout << "Wrong Animal operator called" << std::endl;
	return (*this);
};

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Default Wrong Animal destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const 
{
	return (this->_type); 
}

void	WrongAnimal::setType(std::string type) 
{
	this->_type = type; 
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Random wrong animal noises" << std::endl;
}
	
