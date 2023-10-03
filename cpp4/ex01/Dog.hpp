/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:00:48 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 16:42:49 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H__
# define _DOG_H__

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private	:
		Brain* _brain;
	public	:
		Dog(void);
		Dog(const Dog& cpy);
		Dog&	operator=(const Dog& cpy);
		~Dog(void);

		void	makeSound() const;
};

#endif