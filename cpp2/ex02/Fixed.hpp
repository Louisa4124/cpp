/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:40:31 by lboudjem          #+#    #+#             */
/*   Updated: 2023/09/11 14:38:54 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_rawBits;
		static const int	_nb_bits;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &bycopy);
		~Fixed();

		Fixed			&operator=(const Fixed &bycopy);
		bool    		operator>(const Fixed &fixed) const;
		bool    		operator<(const Fixed &fixed) const;
		bool    		operator>=(const Fixed &fixed) const;
		bool    		operator<=(const Fixed &fixed) const;
		bool    		operator==(const Fixed &fixed) const;
		bool    		operator!=(const Fixed &fixed) const;

		Fixed			operator+(const Fixed &fixed) const;
		Fixed			operator-(const Fixed &fixed) const;
		Fixed			operator*(const Fixed &fixed) const;
		Fixed			operator/(const Fixed &fixed) const;
		
		Fixed			&operator++( void );
		Fixed			&operator--( void );
		Fixed			operator++(int);
		Fixed			operator--(int);
		
		static const Fixed		min(const Fixed &f1, const Fixed &f2);
		static const Fixed		max(const Fixed &f1, const Fixed &f2);
		static Fixed			min(Fixed &f1, Fixed &f2);
		static Fixed			max(Fixed &f1, Fixed &f2);

		int				getRawBits( void ) const;
		void			setRawBits( int const raw );

		float			toFloat( void ) const;
		int				toInt( void ) const;
};

std::ostream&	operator << (std::ostream &os, const Fixed &f);

#endif