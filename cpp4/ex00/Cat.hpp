/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:00:59 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 15:41:31 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H__
# define _CAT_H__

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public	:
		Cat(void);
		Cat(const Cat& cpy);
		Cat&	operator=(const Cat& cpy);
		~Cat(void);

		void	makeSound() const;
};

#endif