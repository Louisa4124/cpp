/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:40:31 by lboudjem          #+#    #+#             */
/*   Updated: 2023/09/08 13:51:32 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_raw_bits;
		static const int	_nb_bits;

	public:
		Fixed();
		Fixed(const Fixed &bycopy);
		~Fixed();

		Fixed	&operator=(const Fixed &bycopy);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif