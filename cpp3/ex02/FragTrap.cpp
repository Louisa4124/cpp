/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:29:14 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 14:24:52 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->setName("Bob");
	this->setHitPts(100);
	this->setEnergyPts(100);
	this->setAttackPts(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	this->setName(name);
	this->setHitPts(100);
	this->setEnergyPts(50);
	this->setAttackPts(20);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& bycopy) : ClapTrap(bycopy)
{	
	this->setName(bycopy.getName());
	this->setHitPts(bycopy.getHitPts());
	this->setEnergyPts(bycopy.getEnergyPts());
	this->setAttackPts(bycopy.getAttackPts());
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& bycopy)
{
	this->setName(bycopy.getName());
	this->setHitPts(bycopy.getHitPts());
	this->setEnergyPts(bycopy.getEnergyPts());
	this->setAttackPts(bycopy.getAttackPts());
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return(*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " high five!" << std::endl;
}


