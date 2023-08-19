/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 22:07:45 by louisa            #+#    #+#             */
/*   Updated: 2023/08/18 22:25:11 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	phonebook.how_to();
	std::string input;
	while (input.compare("EXIT") != 0)
	{
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
	}
	return (0);
}
