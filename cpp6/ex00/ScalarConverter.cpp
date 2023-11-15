/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:21:31 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/15 12:27:36 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter constructor called" << std::endl;
}


ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& cpy)
{
	(void) cpy;
	std::cout << "Copy constructor called" << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& cpy) 
{
	if (this == &cpy)
		return (*this);
	std::cout << "Default Operator called" << std::endl;
	return (*this);
};

bool ScalarConverter::isChar(const std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
		return (true);
	return (false);
}

bool ScalarConverter::isInt(const std::string str)
{
	int i = 0;

	if(str[i] == '-' || str[i] == '+')
		++i;
	while(str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		++i;
	}
	return (true);
}

bool ScalarConverter::isFloat(const std::string str)
{
	int i = 0;

	if (str == "+inff" || str == "-inff" || str == "nanf")
		return (true);
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] && isdigit(str[i]))
		++i;
	if (str[i] != '.')
		return(false);
	++i;
	while (str[i] && isdigit(str[i]))
		++i;
	if (str[i] != 'f')
		return(false);
	if (str[++i] == '\0')
		return (true);
	return (false);
}

bool ScalarConverter::isDouble(const std::string str)
{
	int i = 0;

	if (str == "+inf" || str == "-inf" || str == "nan")
		return (true);
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] && isdigit(str[i]))
		++i;
	if (str[i] != '.')
		return(false);
	++i;
	while(str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		++i;
	}
	return (true);
}

void ScalarConverter::printChar(const std::string str)
{
	char	c = str[0];

	if (!isprint(c))
		std::cout << "char: non displayable" << std::endl;
	else
	{
		std::cout << "char: ";
		std::cout << c << std::endl;
		std::cout << "int: ";
		std::cout << static_cast<int> (c) << std::endl; 
		std::cout << "float: ";
		std::cout << std::fixed << std::setprecision(1) << static_cast<float> (c) << "f" << std::endl;
		std::cout << "double: ";
		std::cout << std::fixed << std::setprecision(1) << static_cast<double> (c) << std::endl;
	}
}

void ScalarConverter::printInt(const std::string str)
{
	(void)str;
}

void ScalarConverter::printFloat(const std::string str)
{
	(void)str;
}

void ScalarConverter::printDouble(const std::string str)
{
	(void)str;
}

void	ScalarConverter::convert(std::string str)
{
	if (isChar(str))
		printChar(str);
	else if (isInt(str))
		printInt(str);
}
