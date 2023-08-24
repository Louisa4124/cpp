/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:09:51 by lboudjem          #+#    #+#             */
/*   Updated: 2023/08/24 12:04:07 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : name(name)
{
	this->weapon = NULL;
	std::cout << "Human B constructor" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Human B destructor" << std::endl;
}

void HumanB::attack()
{
	if (!this->weapon)
		std::cout << this->name << " does not have a weapon" << std::endl;
	else
	{
		std::cout << this->name << " attacks with their ";
		std::cout << this->weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;	
}