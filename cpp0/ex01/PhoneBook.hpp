/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 22:03:18 by louisa            #+#    #+#             */
/*   Updated: 2023/08/18 22:24:52 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
		int		i;

	public :
		PhoneBook();
		~PhoneBook();

		void	how_to(void) const;
		void	add_contact(void);
		void	display_contact(int i) const;
		void	search_contact(void) const;

		int		add_first_name(std::string first_name);
		int		add_last_name(std::string last_name);
		int		add_nickname(std::string nickname);
		int		add_number(std::string number);
		int		add_secret(std::string secret);
};

#endif
