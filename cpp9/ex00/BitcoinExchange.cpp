/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:57:51 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/04 14:27:41 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream _data_file("data.csv");
    if (!_data_file.is_open())
        throw std::runtime_error("Error : cannot open data.csv");

    std::string line;
    std::getline(_data_file, line);

    while (std::getline(_data_file, line)) 
    {
        std::stringstream ss(line);
        std::string date;
        std::string exchange_rate_str;

        std::getline(ss, date, ',');
        std::getline(ss, exchange_rate_str, ',');
        
        std::istringstream iss(exchange_rate_str);
        double exchange_rate;
        iss >> exchange_rate;
        this->_data_content[date] = exchange_rate;
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	(void)copy;
}

BitcoinExchange::~BitcoinExchange() {}

bool BitcoinExchange::isValidDate(const std::string& date) 
{
    static const int    daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    std::istringstream  iss(date);
    int                 year;
    int                 month;
    int                 day;
    char                dash1;
    char                dash2;
    
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return (false);

    if (!(iss >> year >> dash1 >> month >> dash2 >> day))
        return (false);

    if (dash1 != '-' || dash2 != '-' || year < 1900 || month < 1 || month > 12 || day < 1)
        return (false);

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) 
        if (day > 29) 
            return (false);
    else 
        if (day > daysInMonth[month - 1]) 
            return (false);

    return (true);
}


void BitcoinExchange::output(const char *input) 
{
    std::ifstream file(input);
    if (!file.is_open()) 
    {
        std::cerr << "Failed to open file: " << input << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) 
    {
        std::istringstream iss(line);
        std::string date;
        if (std::getline(iss, date, '|')) 
        {
            date.erase(0, date.find_first_not_of(" \t\n\r"));
            date.erase(date.find_last_not_of(" \t\n\r") + 1);
            
            if (!isValidDate(date)) 
            {
                std::cerr << "Error: invalid date => " << date << std::endl;
                continue;
            }

            std::string value_str;
            if (std::getline(iss, value_str)) 
            {
                value_str.erase(0, value_str.find_first_not_of(" \t\n\r"));
                value_str.erase(value_str.find_last_not_of(" \t\n\r") + 1);

                char* end;
                double value = std::strtod(value_str.c_str(), &end);
                (void) value;

                if (*end == '\0') 
                {
                    std::map<std::string, double>::iterator it = _data_content.lower_bound(date);

                    if (it == _data_content.end() || it->first != date) 
                    {
                        if (it != _data_content.begin())
                            --it;
                        else {
                            std::cout << date << " => " << "No exchange_rate found" << std::endl;
                            continue;
                        }
                    }
                    if (value <= 0)
                        std::cerr << "Error: not a positive number" << std::endl;
                    else if (value > 1000)
                        std::cerr << "Error: too large a number." << std::endl;
                    else
                    {    
                        double result = value * it->second;
                        std::cout << date << " => " << value << " = " << result << std::endl;
                    }
                }
                else
                    std::cerr << "Invalid value: " << value_str << std::endl;
            } 
            else
                std::cerr << "Error: bad input => " << line << std::endl;
        } 
        else
            std::cerr << "Error: bad input => " << line << std::endl;
    }

    file.close();
}

