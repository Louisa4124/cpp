/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:18:36 by lboudjem          #+#    #+#             */
/*   Updated: 2023/10/05 14:18:37 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _inventory(0) {};

Character::Character(const Character& src) : ICharacter(src)
{
	this->setInventory(src.getInventory());
	
};

Character&	Character::operator=(const Character& src) 
{
	if (this == &src)
		return (*this);
	this->setInventory(src.getInventory());
	return (*this);
};

Character::~Character(void) {};

AMateria	Character::getInventory(void) const { return (this->_inventory); };
void	Character::setInventory(AMateria inventory) { this->_inventory = inventory; };


void	Character::equip(AMateria* m) {};
	
void	Character::unequip(int idx) {};
	
void	Character::use(int idx, ICharacter& target) {};
	
