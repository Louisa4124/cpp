/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:08 by lboudjem          #+#    #+#             */
/*   Updated: 2023/10/05 14:19:34 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_H__
# define _ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria
{
	
	private	:
		std::string	_type;

	public	:

		Ice(void);
		Ice(const Ice& src);
		Ice&	operator=(const Ice& src);
		~Ice(void);

		std::string	getType(void) const;
		void		setType(std::string type);

};

#endif
