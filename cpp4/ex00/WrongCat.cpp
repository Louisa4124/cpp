/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:01:04 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 16:28:15 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default Wrong Cat constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy)
{
	this->setType(cpy.getType());
	std::cout << "Copy Wrong Cat constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& cpy) 
{
	if (this == &cpy)
		return (*this);
	this->setType(cpy.getType());
	std::cout << "Wrong Cat operator called" << std::endl;
	return (*this);
};

WrongCat::~WrongCat(void) {
	std::cout << "Default Wrong Cat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
	