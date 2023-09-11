/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:40:32 by lboudjem          #+#    #+#             */
/*   Updated: 2023/09/11 14:51:37 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_bits = 8;

Fixed::Fixed()
{
	this->_rawBits = 0;
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
	return (this->_rawBits);	
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_rawBits) / (1 << this->_nb_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_nb_bits);
}

bool    Fixed::operator>(const Fixed &fixed) const
{
    return (this->_rawBits > fixed._rawBits);
}

bool    Fixed::operator<(const Fixed &fixed) const
{
    
    return (this->_rawBits < fixed._rawBits);
}

bool    Fixed::operator>=(const Fixed &fixed) const
{
    return (this->_rawBits >= fixed._rawBits);
}

bool    Fixed::operator<=(const Fixed &fixed) const
{
    return (this->_rawBits <= fixed._rawBits);
}

bool    Fixed::operator==(const Fixed &fixed) const
{
    return (this->_rawBits == fixed._rawBits);
}

bool    Fixed::operator!=(const Fixed &fixed) const
{
    return (this->_rawBits != fixed._rawBits);
}

Fixed    &Fixed::operator++()
{
    this->_rawBits++;
    return (*this);
}

Fixed    &Fixed::operator--()
{
    this->_rawBits--;
    return (*this);
}

Fixed    Fixed::operator++(int)
{
	Fixed	res(*this);

    this->_rawBits++;
    return (res);
}

Fixed    Fixed::operator--(int)
{
	Fixed	res(*this);

    this->_rawBits--;
    return (res);
}

const Fixed    Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed    Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

const Fixed    Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

Fixed    Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	Fixed res;

	res.setRawBits(this->getRawBits() + fixed.getRawBits());
	return(res);
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	Fixed res;

	res.setRawBits(this->getRawBits() + (~fixed.getRawBits() + 1));
	return(res);
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	Fixed res;

	res.setRawBits((this->getRawBits() * fixed.getRawBits()) >> this->_nb_bits);
	return(res);
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	Fixed res;

	res.setRawBits((this->getRawBits() << this->_nb_bits) / fixed.getRawBits());
	return(res);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}
