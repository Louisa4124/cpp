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
    std::cout << std::endl;
    std::cout << "How to use :" << std::endl;
    std::cout << std::endl;
    std::cout << "ADD : Add a contact" << std::endl;
    std::cout << "SEARCH : Search for a contact" << std::endl;
    std::cout << "EXIT : Exit the PhoneBook" << std::endl;
    std::cout << std::endl;
}

int     PhoneBook::add_first_name(std::string first_name)
{
    while (std::cin.good() && first_name.length() == 0)
    {
        std::cout << "Enter first name :";
        getline(std::cin, first_name);
        if (first_name.length() == 0 
            || this->contact[this->i % 8].set_first_name(first_name) == -1)
            std::cout << "Please enter a valid first name" << std::endl;
    }
    return (0);
}

int     PhoneBook::add_last_name(std::string last_name)
{
    while (std::cin.good() && last_name.length() == 0)
    {
        std::cout << "Enter last name :";
        getline(std::cin, last_name);
        if (last_name.length() == 0 
            || this->contact[this->i % 8].set_last_name(last_name) == -1)
            std::cout << "Please enter a valid last name" << std::endl;
    }
    return (0);
}

int    PhoneBook::add_nickname(std::string nickname)
{
    while (std::cin.good() && nickname.length() == 0)
    {
        std::cout << "Enter nickname :";
        getline(std::cin, nickname);
        if (nickname.length() == 0 
            || this->contact[this->i % 8].set_nickname(nickname) == -1)
            std::cout << "Please enter a valid nickname" << std::endl;
    }
    return (0);
}

int     PhoneBook::add_number(std::string number)
{
    while (std::cin.good() && number.length() == 0)
    {
        std::cout << "Enter phone number :";
        getline(std::cin, number);
        if (number.length() == 0 
            || this->contact[this->i % 8].set_number(number) == -1)
            std::cout << "Please enter a valid number" << std::endl;
    }
    return (0);
}

int     PhoneBook::add_secret(std::string secret)
{
    while (std::cin.good() && secret.length() == 0)
    {
        std::cout << "Enter your darkest secret :";
        getline(std::cin, secret);
        if (secret.length() == 0 
            || this->contact[this->i % 8].set_secret(secret) == -1)
            std::cout << "Please enter a valid secret" << std::endl;
    }
    return (0);
}

void    PhoneBook::add_contact(void)
{
    std::string	first_name = "";
    std::string	last_name = "";
    std::string	nickname = "";
    std::string	phone_number = "";
    std::string	darkest_secret = "";

    add_first_name(first_name);
    add_last_name(last_name);
    add_nickname(nickname);
    // add_number(nickname);
    // add_secret(nickname);

    this->i++;
    std::cin.clear();
    std::cout << std::endl;
    std::cout << "Contact added succesfully ! :)" << std::endl;
}