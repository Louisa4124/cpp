/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:03:28 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/27 15:23:13 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    
    // for (int i = 0; i < MAX_VAL; i++){
    //     std::cout << "numbers = " << numbers[i] << std::endl;
    //     std::cout << "mirror = " << mirror[i] << std::endl;
    // }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << std::endl;
    std::cout << "*----- Negative Index Value ------*" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "*----- MAX_VAL Index Value (too big) ------*" << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "*----- Last Index Value ------*" << std::endl;
    try
    {
        std::cout << "value = " << numbers[MAX_VAL - 1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
        std::cout << std::endl;
    std::cout << "*----- Size Function ------*" << std::endl;
    std::cout << "size = " << numbers.size() << std::endl;

    std::cout << std::endl;
    std::cout << "*----- Size Function ------*" << std::endl;
    std::cout << "size = " << numbers.size() << std::endl;

    std::cout << std::endl;
    std::cout << "*----- Empty Array ------*" << std::endl;
    Array<int> empty;
    std::cout << "size = " << empty.size() << std::endl;

    std::cout << std::endl;
    std::cout << "*----- Delete ------*" << std::endl;
    delete [] mirror;
    return 0;
}