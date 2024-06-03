/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:35:37 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/03 15:06:11 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2) 
    {
        std::cerr << "Error" << std::endl;
        return (1);
    } 
    else 
    {
        try 
        {
            RPN(argv[1]);
        }
        catch(const std::exception& e)
	    {
            std::cerr << e.what() << '\n';
        }
    }

    return (0);
}