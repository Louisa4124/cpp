/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:58:24 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/04 14:25:14 by lboudjem         ###   ########.fr       */
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
        std::map<std::string, double>   _input_content;
        
    public:
    	BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &cpy);
        ~BitcoinExchange();

        BitcoinExchange &operator=(const BitcoinExchange &cpy);

        bool    isValidDate(const std::string& date);
        void    output(const char *input);
};

#endif