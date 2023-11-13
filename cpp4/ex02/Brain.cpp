/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:34:52 by louisa            #+#    #+#             */
/*   Updated: 2023/11/02 12:50:46 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "zzz...";
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy._ideas[i];
	std::cout << "Copy Brain constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& cpy) 
{
	if (this == &cpy)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy._ideas[i];
	std::cout << "Brain Operator called" << std::endl;
	return (*this);
};

Brain::~Brain(void)
{
	std::cout << "Default Brain destructor called" << std::endl;
}

void Brain::setIdeas(std::string ideas)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas;
}
