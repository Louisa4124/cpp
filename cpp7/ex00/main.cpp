/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:25:30 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 13:42:39 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main( void ) 
{
    std::cout << "*----- Test with int : -----*" << std::endl;    
    int a = 2;
    int b = 3;
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::cout << "*----- Test with string : -----*" << std::endl; 
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << "*----- Test with char : -----*" << std::endl; 
    char a2 = 'a';
    char z = 'z';
    
    ::swap(a2, z);
    std::cout << "a2 = " << a2 << ", z = " << z << std::endl;
    std::cout << "min( a2, z ) = " << ::min( a2, z ) << std::endl;
    std::cout << "max( a2, z ) = " << ::max( a2, z ) << std::endl;
    
    return 0;
}

