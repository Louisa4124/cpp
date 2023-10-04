/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:15:45 by louisa            #+#    #+#             */
/*   Updated: 2023/10/04 14:42:41 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
	this->setType(cpy.getType());
	std::cout << "Copy Animal constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& cpy) 
{
	if (this == &cpy)
		return (*this);
	this->setType(cpy.getType());
	std::cout << "Animal Operator called" << std::endl;
	return (*this);
};

Animal::~Animal(void) {
	std::cout << "Default Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const 
{
	return (this->_type); 
}

void	Animal::setType(std::string type) 
{
	this->_type = type; 
}

void	Animal::makeSound() const
{
	std::cout << "Random animal noises" << std::endl;
}
	
