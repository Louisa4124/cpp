/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:15:45 by lboudjem          #+#    #+#             */
/*   Updated: 2023/08/23 14:38:07 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N;

	N = 50;
	Zombie *zombie = zombieHorde(N, "michel");
	for (int i = 0; i < N; i++)
    	zombie[i].announce();
    delete[](zombie);
	return (0);
}