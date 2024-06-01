/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:56:56 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/01 18:05:17 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int get_jacobstahl(bool reinit, int i)
{
    static int          n1 = 0;
    static int          n2 = 2;

    if (reinit ==  true)
    {
        n1 = 0;
        n2 = 2;
        return (0);
    }
    
    if (i == 0)
        return (n2);
    else 
    {
        int n3 = n2 + (n1 * 2);
        n1 = n2;
        n2 = n3;
    }
    return (n2);
}

