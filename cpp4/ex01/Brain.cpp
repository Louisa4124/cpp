/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:34:52 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 16:36:49 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& cpy) 
{
	if (this == &cpy)
		return (*this);
	std::cout << "Brain Operator called" << std::endl;
	return (*this);
};

Brain::~Brain(void)
{
	std::cout << "Default Brain destructor called" << std::endl;
}
