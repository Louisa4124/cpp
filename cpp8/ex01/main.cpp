/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:04:08 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 14:15:39 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    std::cout << "*------- Subject test -------*"<< std::endl;
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl;
    std::cout << "*------- Add many numbers test -------*"<< std::endl;
    int arr[50] = {13, 9, 55, 96, 48, 44, 80, 84, 85, 59, -9, -10, 46, 86, 16, 94, 82, 56, 97, 73, 2, 18, 54, 67, 100, 75, 90, 77, 31, 25, 47, 39, 37, 95, 20, 35, 24, 22, 89, 92, 42, 23, 4, 29, 49, 52, 58, 87, 28, 78};
    std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

    Span p(50);
    p.addManyNumbers(vec.begin(), vec.end());
    std::cout << p.shortestSpan() << std::endl;
    std::cout << p.longestSpan() << std::endl;

    std::cout << std::endl;
    std::cout << "*------- Exception test -------*"<< std::endl;
    int arr2[10] = {13, 9, 55, 96, 48, 44, 80, 84, 85, 99};
    std::vector<int> vec2(arr2, arr2 + sizeof(arr2) / sizeof(int));
    try
    {
        Span p2(5);
        p2.addManyNumbers(vec2.begin(), vec2.end());
    }
    catch(const std::length_error& e)
	{
		std::cerr << e.what() << '\n';
	}
    
    return (0);
}