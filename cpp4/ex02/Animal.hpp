/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:17:06 by louisa            #+#    #+#             */
/*   Updated: 2023/10/04 15:37:18 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_H__
# define _ANIMAL_H__

# include <iostream>

class Animal 
{
	protected	:
		std::string	_type;

	public	:
		Animal(void);
		Animal(const Animal& cpy);
		Animal&	operator=(const Animal& cpy);
		virtual ~Animal(void);

		std::string	getType(void) const;
		void	setType(std::string type);

		virtual void	makeSound() const = 0;
};

#endif
