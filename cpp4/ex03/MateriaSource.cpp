/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:04:45 by lboudjem          #+#    #+#             */
/*   Updated: 2023/10/05 15:06:05 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{};

MateriaSource::MateriaSource(const MateriaSource& src) : IMateriaSource(src)
{};

MateriaSource&	MateriaSource::operator=(const MateriaSource& src) 
{
	if (this == &src)
		return (*this);
	return (*this);
};

MateriaSource::~MateriaSource(void) 
{};


void	MateriaSource::learnMateria(AMateria*) 
{};
	
AMateria*	MateriaSource::createMateria(std::string const & type) 
{};
	
