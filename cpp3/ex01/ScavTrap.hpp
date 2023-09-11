/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:54:46 by louisa            #+#    #+#             */
/*   Updated: 2023/09/11 16:33:50 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap& bycopy);
		
		ScavTrap& operator=(const ScavTrap& bycopy);
	
		void	guardGate(void);
		void	attack(const std::string& target);
}

#endif 