/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 21:49:11 by louisa            #+#    #+#             */
/*   Updated: 2023/08/18 22:24:35 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public :
		Contact();
		~Contact();

		std::string	get_first_name() const;
		std::string	get_last_name() const;
		std::string	get_nickname() const;
		std::string	get_number() const;
		std::string	get_secret() const;

		int	set_first_name(std::string new_name);
		int	set_last_name(std::string new_name);
		int	set_nickname(std::string new_name);
		int	set_number(std::string new_number);
		int	set_secret(std::string new_secret);
};

#endif