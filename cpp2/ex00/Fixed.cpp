/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:40:32 by lboudjem          #+#    #+#             */
/*   Updated: 2023/09/08 13:56:00 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static const int _nb_bits = 8;

Fixed::Fixed()
{
	_raw_bits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &bycopy)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(bycopy.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &bycopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(bycopy.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw_bits);	
}

void	Fixed::setRawBits(int const raw)
{
	_raw_bits = raw;
}
