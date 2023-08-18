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
		std::string	f_name;
		std::string	l_name;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public :
		Contact();
		~Contact();
		std::string	get_f_name() const;
		std::string	get_l_name() const;
		std::string	get_number() const;
		std::string	get_secret() const;
};

#endif