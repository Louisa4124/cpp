/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:11:46 by lboudjem          #+#    #+#             */
/*   Updated: 2023/10/05 14:14:28 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : _type(0) {};

Ice::Ice(const Ice& src) : AMateria(src)
{
	this->setType(src.getType());
	
};

Ice&	Ice::operator=(const Ice& src) 
{
	if (this == &src)
		return (*this);
	this->setType(src.getType());
	return (*this);
};

Ice::~Ice(void) {};

std::string	Ice::getType(void) const { return (this->_type); };
void	Ice::setType(std::string type) { this->_type = type; };


