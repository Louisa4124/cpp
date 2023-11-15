/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:49:56 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/15 16:00:10 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer(void)
{
	std::cout << "Serializer constructor called" << std::endl;
}


Serializer::~Serializer(void)
{
	std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer(const Serializer& cpy)
{
	(void) cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Serializer&	Serializer::operator=(const Serializer& cpy) 
{
	if (this == &cpy)
		return (*this);
	std::cout << "Default Operator called" << std::endl;
	return (*this);
};

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t> (ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*> (raw));
}