/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:00:48 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 15:41:37 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H__
# define _DOG_H__

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public	:
		Dog(void);
		Dog(const Dog& cpy);
		Dog&	operator=(const Dog& cpy);
		~Dog(void);

		void	makeSound() const;
};

#endif