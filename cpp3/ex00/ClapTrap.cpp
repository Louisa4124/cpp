/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:57:08 by louisa            #+#    #+#             */
/*   Updated: 2023/10/03 10:55:52 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->setName(name);
	this->setHitPts(10);
	this->setEnergyPts(10);
	this->setAttackPts(0);
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(void)
{
	this->setName("Bob");
	this->setHitPts(10);
	this->setEnergyPts(10);
	this->setAttackPts(0);
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& bycopy)
{
	this->setName(bycopy.getName());
	this->setHitPts(bycopy.getHitPts());
	this->setEnergyPts(bycopy.getEnergyPts());
	this->setAttackPts(bycopy.getAttackPts());
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& bycopy)
{
	if (&bycopy == this)
		return (*this);
	this->setName(bycopy.getName());
	this->setHitPts(bycopy.getHitPts());
	this->setEnergyPts(bycopy.getEnergyPts());
	this->setAttackPts(bycopy.getAttackPts());
	std::cout << "Copy assignment operator called" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return(this->_name);
}

int	ClapTrap::getHitPts(void) const
{
	return(this->_hitPts);
}

int	ClapTrap::getEnergyPts(void) const
{
	return(this->_energyPts);
}

int	ClapTrap::getAttackPts(void) const
{
	return(this->_attackPts);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPts(int hitPts)
{
	this->_hitPts = hitPts;
}

void	ClapTrap::setEnergyPts(int energyPts)
{
	this->_energyPts = energyPts;
}

void	ClapTrap::setAttackPts(int attackPts)
{
	this->_attackPts = attackPts;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->getEnergyPts() == 0)
		std::cout << "ClapTrap" << this->getName() << "cannot attack anymore" << std::endl;
	else
	{
		this->setEnergyPts(this->energyPts--);
		std::cout << "ClapTrap" << this->getName() << "attacks"
			<< target <<", causing" << this->getAttackPts() << "points of damage!" << std::endl;	
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPts() == 0)
		std::cout << "ClapTrap" << this->getName() << "cannot be attacked anymore" << std::endl;
	else
	{
		this->setHitPts(this->getHitPts() - amount);
		std::cout << "ClapTrap" << this->getName() << "has taken"
			<< amount << "points of damage!" << std::endl;	
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->setEnergyPts(getEnergyPts()--);
	this->setHitPts(getHitPts() + amount);
	std::cout << "ClapTrap" << this->getName() << "healed itself"
		<< amount << "health point!" << std::endl;
}
