/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:49:28 by lboudjem          #+#    #+#             */
/*   Updated: 2023/08/23 15:06:25 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "string adress = " << &str << std::endl;
	std::cout << "stringPTR adress = " << stringPTR << std::endl;
	std::cout << "stringREF adress = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "string value = " << str << std::endl;
	std::cout << "stringPTR value = " << *stringPTR << std::endl;
	std::cout << "stringREF value = " << stringREF << std::endl;
	return (0);
}