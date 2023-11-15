/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:21:31 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/15 15:42:31 by lboudjem         ###   ########.fr       */
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
	if (!isdigit(str[i]))
		return (false);
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
	if (!isdigit(str[i]))
		return (false);
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


bool ScalarConverter::isOverflow(const std::string str)
{
	int 	i = 0;
	long	int res;

	if (str[i] == '-' || str[i] == '+')
		++i;
	while(str[i])
	{
		if (str[i] == '.')
			return (false);	
		else if (!isdigit(str[i]))
			return (false);
		++i;
	}
	res = static_cast<long int> (strtol(str.c_str(), NULL, 10));
	if (res < INT_MIN || res > INT_MAX)
		return (true);
	return (false);
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
	int		i = static_cast<int> (strtol(str.c_str(), NULL, 10));
	char	c = static_cast<char> (i);
	
	if (!isprint(c))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
	std::cout << "int: ";
	std::cout << i << std::endl; 
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1) << static_cast<float> (i) << "f" << std::endl;
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << static_cast<double> (i) << std::endl;
}

void ScalarConverter::printFloat(const std::string str)
{
	float	f = strtof(str.c_str(), NULL);
	char	c = static_cast<char> (f);
	
	if (str == "+inff" || str == "-inff" || str == "nanf")
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
		
	if (str == "+inff" || str == "-inff" || str == "nanf")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int> (f) << std::endl; 
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << static_cast<double> (f) << std::endl;
}

void ScalarConverter::printDouble(const std::string str)
{
	float	d = strtod(str.c_str(), NULL);
	char	c = static_cast<char> (d);

	if (str == "+inf" || str == "-inf" || str == "nan")
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
		
	if (str == "+inf" || str == "-inf" || str == "nan")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int> (d) << std::endl; 
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1) << static_cast<float> (d) << "f" << std::endl;
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::printOverflow(void)
{
	std::cout << "char: overflow" << std::endl;
	std::cout << "int: overflow" << std::endl;
	std::cout << "float: overflow" << std::endl;
	std::cout << "double: overflow" << std::endl;
}

void	ScalarConverter::convert(std::string str)
{
	if (isOverflow(str))
		printOverflow();
	else if (isChar(str))
		printChar(str);
	else if (isInt(str))
		printInt(str);
	else if (isFloat(str))
		printFloat(str);
	else if (isDouble(str))
		printDouble(str);
	else
		std::cout << "Unknown entry" << std::endl;
}
