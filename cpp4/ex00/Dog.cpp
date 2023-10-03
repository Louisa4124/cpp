/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:00:50 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 16:29:53 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
	this->setType(cpy.getType());
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& cpy)
{
	if (this == &cpy)
		return (*this);
	this->setType(cpy.getType());
	std::cout << "Dog operator called" << std::endl;
	return (*this);
};

Dog::~Dog(void) {
	std::cout << "Default Dog destructor called" << std::endl;
}

void	Dog::makeSound() const 
{
	std::cout << "Woof" << std::endl;
}