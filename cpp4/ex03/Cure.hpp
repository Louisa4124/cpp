/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:02 by lboudjem          #+#    #+#             */
/*   Updated: 2023/10/05 14:19:22 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_H__
# define _CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria
{
	
	private	:
		std::string	_type;

	public	:

		Cure(void);
		Cure(const Cure& src);
		Cure&	operator=(const Cure& src);
		~Cure(void);

		std::string	getType(void) const;
		void		setType(std::string type);

};

#endif
