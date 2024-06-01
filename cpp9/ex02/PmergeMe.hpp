/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:56:44 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/01 18:07:57 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <deque>

int get_jacobstahl(bool reinit, int i);

template <typename T>
void    sort_pair(T& numbers)
{
    for (size_t i = 0; i + 1 < numbers.size(); i += 2) 
    {
        if (numbers[i] > numbers[i + 1]) {
            std::swap(numbers[i], numbers[i + 1]);
        }
    }
}

template <typename T>
void    binary_search(T& result, int value)
{
    typename T::iterator it = std::lower_bound(result.begin(), result.end(), value);
    result.insert(it, value);
}

template <typename T>
T   extract_max(const T& numbers)
{
    T max_numbers;
    
    for (size_t i = 0; i + 1 < numbers.size(); i += 2)
        max_numbers.push_back(std::max(numbers[i], numbers[i + 1]));

    if (numbers.size() % 2 != 0) 
        max_numbers.push_back(numbers.back());
    
    return (max_numbers);
}

template <typename T>
void    algo(T& input, T& result)
{
    int                 odd = -1;
    T    max;
    
    if (input.size() % 2 != 0)
    {
        odd = input[input.size() - 1];
        input.pop_back(); 
    }
    
    sort_pair(input);

    if (input.size() > 2)
    {
        max = extract_max(input);
        algo(max, result);
    } 
    else 
    {        
        for (size_t i = 0; i < input.size(); i++)
            result.push_back(input[i]);
        if (odd != -1){
            binary_search(result, odd);
            odd = -1;
        }
    }
    
    if (input.size() <= 2)
        return;
    
    T    sorted_max;
    for (size_t i = 0; i < result.size(); i++)
    {
        typename T::iterator it = std::find(input.begin(), input.end(), result[i]);
        if (it != input.end()) {
            int index = std::distance(input.begin(), it);
            sorted_max.push_back(input[index - 1]);
            sorted_max.push_back(input[index]);
        }
    }

    result.insert(result.begin(), sorted_max[0]);

    T difference;
    T index;

    for (size_t i = 0; i < sorted_max.size(); ++i)
        if (std::find(result.begin(), result.end(), sorted_max[i]) == result.end())
            difference.push_back(sorted_max[i]);

    for (size_t i = 0; i < difference.size(); ++i)
    {
        int js = get_jacobstahl(false, i);
        int diff = difference.size() - index.size();
        if (diff < js)
            js = diff;
        for (int j = 0; j < js; j++)
            index.push_back((js - (j + 1)) + i);
        i += js - 1;
    }
    
    for (size_t i = 0; i < index.size(); ++i)
        binary_search(result, difference[index[i]]);

    if (odd != -1){
        binary_search(result, odd);
        odd = -1;
    }

    get_jacobstahl(true, 0);
}

#endif