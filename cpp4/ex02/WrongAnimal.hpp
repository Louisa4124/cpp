/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:17:06 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 15:45:36 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_H__
# define _WRONGANIMAL_H__

# include <iostream>

class WrongAnimal 
{
	protected	:
		std::string	_type;

	public	:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& cpy);
		WrongAnimal&	operator=(const WrongAnimal& cpy);
		~WrongAnimal(void);

		std::string	getType(void) const;
		void	setType(std::string type);

		void	makeSound() const;
};

#endif
