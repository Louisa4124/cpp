/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:58:37 by louisa            #+#    #+#             */
/*   Updated: 2023/09/18 13:36:15 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::get_first_name() const
{
	return (this->first_name);
}

std::string Contact::get_last_name() const
{
	return (this->last_name);
}

std::string Contact::get_nickname() const
{
	return (this->nickname);
}

std::string Contact::get_number() const
{
	return (this->phone_number);
}

std::string Contact::get_secret() const
{
	return (this->darkest_secret);
}

int Contact::set_first_name(std::string new_name)
{
	size_t	i;

	i = 0;
    if (new_name.length() == 0)
        return (-1);
    while (i < new_name.size())
	{
		if (isalpha(new_name[i]))
			++i;
		else if (!isalpha(new_name[i]) && isspace(new_name[i]))
			++i;
        else
			return (-1);
	}
    this->first_name = new_name;
    return (0);
}

int Contact::set_last_name(std::string new_name)
{
	size_t	i;

	i = 0;
    if (new_name.length() == 0)
        return (-1);
    while (i < new_name.size())
	{
		if (isalpha(new_name[i]))
			++i;
		else if (!isalpha(new_name[i]) && isspace(new_name[i]))
			++i;
        else
			return (-1);
	}
    this->last_name = new_name;
    return (0);
}

int Contact::set_nickname(std::string new_name)
{
	size_t	i;

	i = 0;
    if (new_name.length() == 0)
        return (-1);
    while (i < new_name.size())
	{
		if (isalpha(new_name[i]))
			++i;
		else if (!isalpha(new_name[i]) && isspace(new_name[i]))
			++i;
        else
			return (-1);
	}
    this->nickname = new_name;
    return (0);
}

int Contact::set_secret(std::string new_secret)
{
    if (new_secret.length() == 0)
        return (-1);
    this->darkest_secret = new_secret;
    return (0);
}

int Contact::set_number(std::string new_number)
{
	size_t	i;

	i = 0;
    if (new_number.length() == 0)
        return (-1);
    while (i < new_number.size())
    {
		if (!isdigit(new_number[i]))
			return (-1);
        ++i;
    }
    this->phone_number = new_number;
    return (0);
}