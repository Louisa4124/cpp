/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:56:58 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/03 14:50:12 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) 
{
    if (argc < 2) 
    {
        std::cerr << "Usage: " << argv[0] << " <int1> <int2> ... <intN>" << std::endl;
        return (1);
    }

    std::vector<int> input;
    std::vector<int> result;
    double timeV;
    
    std::deque<int> input2;
    std::deque<int> result2;
    double timeD;

    for (int i = 1; i < argc; ++i) 
    {
        int num = std::atoi(argv[i]);
        if (num < 0)
        {
            std::cerr << "Error" << std::endl;
            return (1);
        }
        input.push_back(num);
        input2.push_back(num);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < input.size(); i++)
        std::cout << input[i] << " ";
    std::cout << std::endl;

    timeV = timer(input, result);
    timeD = timer(input2, result2);
    
    std::cout << "After : ";
    for (size_t i = 0; i < result.size(); i++)
        std::cout << result[i] << " ";
    std::cout << std::endl << std::endl;
    
    std::cout << "Time to process a range of " << input.size();
    std::cout << " elements with std::vector : " << std::fixed << std::setprecision(5) <<  timeV / CLOCKS_PER_SEC << " us" << std::endl;
    std::cout << "Time to process a range of " << input2.size();
    std::cout << " elements with std::deque  : " << std::fixed << std::setprecision(5) <<  timeD / CLOCKS_PER_SEC << " us" << std::endl;

    return (0);
}


