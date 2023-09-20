/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:43:15 by lboudjem          #+#    #+#             */
/*   Updated: 2023/09/20 15:11:16 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("nameless")
{
	std::cout << "Default Constructor Called "<< std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " is destructed" << std::endl;
}

std::string	Zombie::get_name() const
{
	return (this->name);
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->get_name();
	std::cout << " : BraiiiiiiinnnzzzZ..." << std::endl;
}