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
	std::string input = "";

	phonebook.how_to();
	while (std::cin.good() && input.compare("EXIT") != 0)
	{
		std::cout << "> ";
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		if (input.compare("SEARCH") == 0)
			phonebook.search_contact();
	}
	return (0);
}
