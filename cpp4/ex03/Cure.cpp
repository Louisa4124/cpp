/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:04 by lboudjem          #+#    #+#             */
/*   Updated: 2023/10/05 14:14:21 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : _type(0) {};

Cure::Cure(const Cure& src) : AMateria(src)
{
	this->setType(src.getType());
	
};

Cure&	Cure::operator=(const Cure& src) 
{
	if (this == &src)
		return (*this);
	this->setType(src.getType());
	return (*this);
};

Cure::~Cure(void) {};

std::string	Cure::getType(void) const { return (this->_type); };
void	Cure::setType(std::string type) { this->_type = type; };


