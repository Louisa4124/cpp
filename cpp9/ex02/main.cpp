/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:56:58 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/31 14:56:38 by lboudjem         ###   ########.fr       */
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

    std::vector<int> numbers;
    std::vector<int> max;
    std::vector<int> min;

    for (int i = 1; i < argc; ++i) 
    {
        int num = std::atoi(argv[i]);
        numbers.push_back(num);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    sort_pair(numbers);

    std::cout << "After: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return (0);
}
