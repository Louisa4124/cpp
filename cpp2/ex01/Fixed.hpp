/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:40:31 by lboudjem          #+#    #+#             */
/*   Updated: 2023/09/09 15:24:04 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_raw_bits;
		static const int	_nb_bits;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &bycopy);
		~Fixed();

		Fixed	&operator=(const Fixed &bycopy);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator << (std::ostream &os, const Fixed &f);

#endif