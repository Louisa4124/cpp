/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:04:05 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 11:40:34 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	scav1("irina");

	scav1.setAttackPts(15);
	FragTrap	scav2(scav1);

	scav2.setName("Shedorus");
	scav1.attack("the wall");
	scav1.highFivesGuys();
	scav1.beRepaired(15);
	scav1.takeDamage(600);
	scav1.highFivesGuys();
	scav2.highFivesGuys();
	scav2.highFivesGuys();
	scav2.attack("bob");
	return (0);
}