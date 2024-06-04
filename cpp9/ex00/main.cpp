/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:58:08 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/04 15:27:54 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) 
{
    if (argc != 2)
	{
		std::cerr << "Error: could not open file" << std::endl;
		return (1);
	}
    try
    {
        BitcoinExchange btc;
        btc.output(argv[1]);
    }
    catch (std::exception & error)
    {
        std::cerr << "Error: " << error.what() << std::endl;
    }

    return 0;
}

