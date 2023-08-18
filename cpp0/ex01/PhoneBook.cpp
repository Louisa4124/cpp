/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:45:41 by louisa            #+#    #+#             */
/*   Updated: 2023/08/18 22:25:40 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void    PhoneBook::how_to(void) const 
{
    std::cout << "How to use :" << std::endl;
    std::cout << std::endl;
    std::cout << "ADD : Add a contact" << std::endl;
    std::cout << "SEARCH : Search for a contact" << std::endl;
    std::cout << "EXIT : Exit the PhoneBook" << std::endl;
}