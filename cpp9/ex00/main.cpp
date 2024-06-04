/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:58:08 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/04 13:45:16 by lboudjem         ###   ########.fr       */
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
    
    BitcoinExchange btc;
    btc.output(argv[1]);

    return 0;
}

