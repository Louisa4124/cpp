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
	public :
		PhoneBook();
		~PhoneBook();
		void	how_to(void) const;
		void	add(void);
		void	print(void) const;
		void	search(void) const;
};

#endif