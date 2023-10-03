/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:54:03 by louisa            #+#    #+#             */
/*   Updated: 2023/09/11 16:28:19 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPts;
		unsigned int	_energyPts;
		unsigned int	_attackPts;
		
	public:
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap& bycopy);
		
		ClapTrap& operator=(const ClapTrap& bycopy);

		std::string		getName(void) const;
		int				getHitPts(void) const;
		int				getEnergyPts(void) const;
		int				getAttackPts(void) const;

		void			setName(std::string name);
		void			setHitPts(int hitPts);
		void			setEnergyPts(int energyPts);
		void			setAttackPts(int attackPts);
		
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif