/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:56:58 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/01 18:12:46 by lboudjem         ###   ########.fr       */
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

    std::deque<int> input;
    std::deque<int> max;
    std::deque<int> result;

    for (int i = 1; i < argc; ++i) {
        int num = std::atoi(argv[i]);
        if (num < 0)
        {
            std::cerr << "Error" << std::endl;
            return (1);
        }
        input.push_back(num);
    }


    // std::vector<int> input;
    // std::vector<int> max;
    // std::vector<int> result;

    // for (int i = 1; i < argc; ++i) 
    // {
    //     int num = std::atoi(argv[i]);
    //     if (num < 0)
    //     {
    //         std::cerr << "Error" << std::endl;
    //         return (1);
    //     }
    //     input.push_back(num);
    // }

    std::cout << "Before: ";
    for (size_t i = 0; i < input.size(); i++)
        std::cout << input[i] << " ";
    std::cout << std::endl;

    algo(input, result);

    std::cout << "After : ";
    for (size_t i = 0; i < result.size(); i++)
        std::cout << result[i] << " ";
    std::cout << std::endl << std::endl;

    return (0);
}


