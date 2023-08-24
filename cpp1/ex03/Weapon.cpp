/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:09:47 by lboudjem          #+#    #+#             */
/*   Updated: 2023/08/24 12:03:50 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : type(type)
{
	std::cout << "Weapon constructor" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor" << std::endl;
}

std::string	Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(const std::string type)
{
	this->type = type;
}