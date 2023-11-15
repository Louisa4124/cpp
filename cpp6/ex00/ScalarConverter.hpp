/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:21:44 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/15 12:21:58 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <climits>
# include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(const ScalarConverter& cpy);
		ScalarConverter& operator=(const ScalarConverter& cpy);

		static bool isChar(const std::string str);
		static bool isInt(const std::string str);
		static bool isFloat(const std::string str);
		static bool isDouble(const std::string str);
		
		static void printChar(const std::string str);
		static void printInt(const std::string str);
		static void printFloat(const std::string str);
		static void printDouble(const std::string str);
	
	public:
		static void	convert(std::string str);
		
};

#endif