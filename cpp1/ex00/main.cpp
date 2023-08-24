/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:42:22 by lboudjem          #+#    #+#             */
/*   Updated: 2023/08/23 13:38:45 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    randomChump("alfred");
    Zombie *zombie = newZombie("michel");
    zombie->announce();
    delete(zombie);
    return (0);
}