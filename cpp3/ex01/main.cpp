/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:04:05 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 11:04:34 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav1("irina");

	scav1.setAttackPts(15);
	ScavTrap	scav2(scav1);

	scav2.setName("Shedorus");
	scav1.attack("the wall");
	scav1.beRepaired(15);
	scav1.takeDamage(600);
	scav1.takeDamage(600);
	scav2.guardGate();
	scav2.guardGate();
	scav2.attack("bob");
	return (0);
}