/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:58:24 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/04 15:40:04 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <map>
# include <string>
# include <fstream>
# include <iostream>
# include <exception>
# include <cstdlib>
# include <ctime>
# include <cstring>
# include <sstream>

class BitcoinExchange
{
    private:
        std::map<std::string, double>   _data_content;
        
        BitcoinExchange(const BitcoinExchange &cpy);
        BitcoinExchange &operator=(const BitcoinExchange &cpy);
        
    public:
    	BitcoinExchange();
        ~BitcoinExchange();

        bool    isValidDate(const std::string& date);
        void    output(const char *input);
};

#endif