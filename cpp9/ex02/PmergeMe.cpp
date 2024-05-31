/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:56:56 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/31 14:55:45 by lboudjem         ###   ########.fr       */
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