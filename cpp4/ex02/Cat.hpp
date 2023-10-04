/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:00:59 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 16:42:55 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H__
# define _CAT_H__

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private	:
		Brain *_brain;
	public	:
		Cat(void);
		Cat(const Cat& cpy);
		Cat&	operator=(const Cat& cpy);
		~Cat(void);

		void	makeSound() const;
};

#endif