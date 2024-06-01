/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:56:56 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/01 16:14:12 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void sort_pair(std::vector<int>& numbers) {
    for (size_t i = 0; i + 1 < numbers.size(); i += 2) 
    {
        if (numbers[i] > numbers[i + 1]) {
            std::swap(numbers[i], numbers[i + 1]);
        }
    }
}

std::vector<int> extract_max_from_pairs(const std::vector<int>& numbers) 
{
    std::vector<int> max_numbers;
    
    for (size_t i = 0; i + 1 < numbers.size(); i += 2)
        max_numbers.push_back(std::max(numbers[i], numbers[i + 1]));

    if (numbers.size() % 2 != 0) 
        max_numbers.push_back(numbers.back());
    
    return (max_numbers);
}


void binary_search(std::vector<int>& result, int value) 
{
    std::vector<int>::iterator it = std::lower_bound(result.begin(), result.end(), value);
    result.insert(it, value);
}
