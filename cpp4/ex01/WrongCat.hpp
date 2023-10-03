/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:00:59 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 15:54:01 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_CAT_H__
# define _WRONG_CAT_H__

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public	:
		WrongCat(void);
		WrongCat(const WrongCat& cpy);
		WrongCat&	operator=(const WrongCat& cpy);
		~WrongCat(void);

		void	makeSound() const;
};

#endif