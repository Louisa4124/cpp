/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:01:04 by louisa            #+#    #+#             */
/*   Updated: 2023/10/05 13:29:46 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_brain = new Brain();
	this->setType("Cat");
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	this->_brain = new Brain(*cpy._brain);
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& cpy) 
{
	if (this == &cpy)
		return (*this);
	this->setType(cpy.getType());
	delete this->_brain;
	this->_brain = new Brain(*cpy._brain);
	std::cout << "Cat operator called" << std::endl;
	return (*this);
};

Cat::~Cat(void) 
{
	delete this->_brain;
	std::cout << "Default Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "*Meow*" << std::endl;
}
