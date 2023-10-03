/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:45:41 by louisa            #+#    #+#             */
/*   Updated: 2023/09/18 14:38:42 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : i(0) {}

PhoneBook::~PhoneBook() {}

void    PhoneBook::how_to(void) const 
{
    std::cout << std::endl;
    std::cout << "How to use :" << std::endl;
    std::cout << std::endl;
    std::cout << "ADD\t: Add a contact" << std::endl;
    std::cout << "SEARCH\t: Search for a contact" << std::endl;
    std::cout << "EXIT\t: Exit the PhoneBook" << std::endl;
    std::cout << std::endl;
}

int     PhoneBook::add_first_name(std::string first_name)
{
    first_name = "";
    
    while (std::cin.good() && first_name.length() == 0)
    {
        std::cout << "Enter first name : ";
        getline(std::cin, first_name);
        if (first_name.length() == 0 
            || this->contact[this->i % 8].set_first_name(first_name) == -1)
            {
                std::cout << "Please enter a valid first name" << std::endl;
                return (-1);
            }
    }
    return (0);
}

int     PhoneBook::add_last_name(std::string last_name)
{
    while (std::cin.good() && last_name.length() == 0)
    {
        std::cout << "Enter last name : ";
        getline(std::cin, last_name);
        if (last_name.length() == 0 
            || this->contact[this->i % 8].set_last_name(last_name) == -1)
            {
                std::cout << "Please enter a valid last name" << std::endl;
                return (-1);
            }
    }
    return (0);
}

int    PhoneBook::add_nickname(std::string nickname)
{
    while (std::cin.good() && nickname.length() == 0)
    {
        std::cout << "Enter nickname : ";
        getline(std::cin, nickname);
        if (nickname.length() == 0 
            || this->contact[this->i % 8].set_nickname(nickname) == -1)
            {
                std::cout << "Please enter a valid nickname" << std::endl;
                return (-1);
            }
    }
    return (0);
}

int     PhoneBook::add_number(std::string number)
{
    while (std::cin.good() && number.length() == 0)
    {
        std::cout << "Enter phone number : ";
        getline(std::cin, number);
        if (number.length() == 0 
            || this->contact[this->i % 8].set_number(number) == -1)
            {
                std::cout << "Please enter a valid phone number" << std::endl;
                return (-1);
            }
    }
    return (0);
}

int     PhoneBook::add_secret(std::string secret)
{
    while (std::cin.good() && secret.length() == 0)
    {
        std::cout << "Enter your darkest secret : ";
        getline(std::cin, secret);
        if (secret.length() == 0 
            || this->contact[this->i % 8].set_secret(secret) == -1)
            {
                std::cout << "Please enter a valid secret" << std::endl;
                return (-1);
            }
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
    int         i = -1;

    while (i != 0)
        i = add_first_name(first_name);
    i = -1;
    while (i != 0)
        i = add_last_name(last_name);
    i = -1;
    while (i != 0)
        i = add_nickname(nickname);
    i = -1;
    while (i != 0)
        i = add_number(phone_number);
    i = -1;
    while (i != 0)
        i = add_secret(darkest_secret);

    this->i++;
    std::cin.clear();
    std::cout << std::endl;
    std::cout << "Contact added succesfully ! :)" << std::endl;
    std::cout << std::endl;
}

std::string trim_str(std::string str)
{
    std::string new_str;

    new_str = str;
    if (new_str.length() > 10)
    {
        new_str[9] = '.';
        new_str.erase(10, new_str.length() - 10);
    }
    return(new_str);
}

int    PhoneBook::display_contact(int i) const
{
    int num;

    num = 0;
    if (i == -1)
    {
        i = 0;
        while (i < 8 && contact[i].get_first_name().length() > 0)
        {
            std::cout << std::setw(10) << i + 1 << "|";
            std::cout << std::setw(10) << trim_str(contact[i].get_first_name()) << "|";
            std::cout << std::setw(10) << trim_str(contact[i].get_last_name()) << "|";
            std::cout << std::setw(10) << trim_str(contact[i].get_nickname()) << std::endl;
            ++i;
            ++num;
        }
        return (num);
    }
    else
    {
        std::cout << "First name : " << contact[i].get_first_name() << std::endl;
        std::cout << "Last name : " << contact[i].get_last_name() << std::endl;
        std::cout << "Nickname : " << contact[i].get_nickname() << std::endl;
        std::cout << "Phone number : " << contact[i].get_number() << std::endl;
        std::cout << "Darkest secret : " << contact[i].get_secret() << std::endl;
        std::cout << std::endl;
        return(0);
    }
}

void    PhoneBook::search_contact(void) const
{
    std::string input = "";
    int         index = -1;
    int         num   = 0;

    num = display_contact(index);
    if (num > 0)
    {
        std::cout << "Enter an index value : " << std::endl;
        while (std::cin.good() && input.length() == 0)
        {
            while (std::cin.good() && (index < 0 || index > 7))
            {
                std::cout << ">> ";
                getline(std::cin, input);
                index = atoi(input.c_str());
                if (index > 0 && index <= num)
                    display_contact(index - 1);
                else
                {
                    std::cout << "Please enter an index value between 1 and " << num << std::endl;
                    index = -1;
                }
            }
        }
        std::cin.clear();   
    }
    else
        std::cout << "No contact to display" << std::endl;
}
