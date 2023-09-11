/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:40:32 by lboudjem          #+#    #+#             */
/*   Updated: 2023/09/11 13:47:35 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_bits = 8;

Fixed::Fixed()
{
	_raw_bits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(num << this->_nb_bits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(static_cast<int>(roundf(num * (1 << this->_nb_bits))));
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

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_raw_bits) / (1 << this->_nb_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_raw_bits >> this->_nb_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}
