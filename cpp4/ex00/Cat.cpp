/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:01:04 by louisa            #+#    #+#             */
/*   Updated: 2023/10/04 14:43:11 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->setType("Cat");
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	this->setType(cpy.getType());
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& cpy) 
{
	if (this == &cpy)
		return (*this);
	this->setType(cpy.getType());
	std::cout << "Cat operator called" << std::endl;
	return (*this);
};

Cat::~Cat(void) 
{
	std::cout << "Default Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "*Meow*" << std::endl;
}
	