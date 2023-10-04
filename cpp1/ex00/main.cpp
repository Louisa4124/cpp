/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:42:22 by lboudjem          #+#    #+#             */
/*   Updated: 2023/09/21 11:59:36 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*p_zombie1;
	Zombie	*p_zombie2;
	
	p_zombie1 = newZombie("Alfred");
	p_zombie2 = newZombie("Bob");
	p_zombie1->announce();
	p_zombie2->announce();
	randomChump("Titi");
	randomChump("Loulou");
    
	delete p_zombie1; // alfred
	delete p_zombie2; // bob
	return (0);
}