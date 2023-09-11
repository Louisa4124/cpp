/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:54:48 by louisa            #+#    #+#             */
/*   Updated: 2023/09/11 17:18:27 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->setName("Bob");
	this->setHitPts(100);
	this->setEnergyPts(50);
	this->setAttackPts(20);
	this->setMode(false);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	this->setName(name);
	this->setHitPts(100);
	this->setEnergyPts(50);
	this->setAttackPts(20);
	this->setMode(false);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& bycopy)
{
	this->setName(bycopy.getName());
	this->setHitPts(bycopy.getHitPts());
	this->setEnergyPts(bycopy.getEnergyPts());
	this->setAttackPts(bycopy.getAttackPts());
	this->setMode(bycopy.getMode());
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap default destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& bycopy)
{
	this->setName(bycopy.getName());
	this->setHitPts(bycopy.getHitPts());
	this->setEnergyPts(bycopy.getEnergyPts());
	this->setAttackPts(bycopy.getAttackPts());
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "scavTrap " << this->getName() << "is garding the gate" << std::endl;
	this->setMode(true);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPts() == 0)
		std::cout << "ScavTrap" << this->getName() << "cannot attack anymore" << std::endl;
	else
	{
		this->setEnergyPts(this->energyPts--);
		std::cout << "ScavTrap" << this->getName() << "attacks"
			<< target <<", causing" << this->getAttackPts() << "points of damage!" << std::endl;	
	}
}

void	ScavTrap::setMode(bool mode)
{
	this->_gateKeeperMode = mode;
}

bool	ScavTrap::getMode()
{
	return(this->_gateKeeperMode);
}
