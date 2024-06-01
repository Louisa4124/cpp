/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:56:58 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/01 17:11:48 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int getJacobstahl(bool reinit, int i)
{
    static int          n1 = 0;
    static int          n2 = 2;

    if (reinit ==  true)
    {
        n1 = 0;
        n2 = 2;
        return (0);
    }
    
    if (i == 0)
        return (n2);
    else 
    {
        int n3 = n2 + (n1 * 2);
        n1 = n2;
        n2 = n3;
    }
    return (n2);
}

void algo(std::vector<int>& input, std::vector<int>& max, std::vector<int>& result)
{
    int                 odd = -1;
    std::vector<int>    new_max;
    
    std::cout << "Before: ";
    for (size_t i = 0; i < input.size(); i++)
        std::cout << input[i] << " ";
    std::cout << std::endl;
    
    if (input.size() % 2 != 0)
    {
        odd = input[input.size() - 1];
         input.pop_back(); 
    }
    
    sort_pair(input);

    if (odd != -1)
        std::cout << "Odd nb: " << odd << std::endl;

    std::cout << "1st sort: ";
    for (size_t i = 0; i < input.size(); i++)
        std::cout << input[i] << " ";
    std::cout << std::endl;

    if (input.size() > 2)
    {
        max = extract_max_from_pairs(input);
        
        std::cout << "Max: ";
        for (size_t i = 0; i < max.size(); i++)
            std::cout << max[i] << " ";
        std::cout << std::endl << std::endl;
        
        algo(max, new_max, result);
    } else {        
        for (size_t i = 0; i < input.size(); i++)
            result.push_back(input[i]);
        
        if (odd != -1){
            binary_search(result, odd);
            odd = -1;  // !!!
        }
            
        std::cout << "Result: ";
        for (size_t i = 0; i < result.size(); i++)
            std::cout << result[i] << " ";
        std::cout << std::endl << std::endl;
        std::cout << "On remonte !" << std::endl;
    }
    
    if (input.size() <= 2)
        return;
    
    std::cout << "Input: ";
    for (size_t i = 0; i < input.size(); i++)
        std::cout << input[i] << " ";
    std::cout << std::endl;

    std::cout << "Result: ";
    for (size_t i = 0; i < result.size(); i++)
        std::cout << result[i] << " ";
    std::cout << std::endl ;

    std::vector<int>    sorted_max;
    for (size_t i = 0; i < result.size(); i++)
    {
        std::vector<int>::iterator it = std::find(input.begin(), input.end(), result[i]);
        if (it != input.end()) {
            int index = std::distance(input.begin(), it);
            sorted_max.push_back(input[index - 1]);
            sorted_max.push_back(input[index]);
        }
    }
    std::cout << "Pair sort: ";
    for (size_t i = 0; i < sorted_max.size(); i++)
        std::cout << sorted_max[i] << " ";
    std::cout << std::endl;
    
    result.insert(result.begin(), sorted_max[0]);
    std::cout << "Result: ";
    for (size_t i = 0; i < result.size(); i++)
        std::cout << result[i] << " ";
    std::cout << std::endl;

    std::vector<int> difference;
    std::vector<int> index;

    for (size_t i = 0; i < sorted_max.size(); ++i)
        if (std::find(result.begin(), result.end(), sorted_max[i]) == result.end())
            difference.push_back(sorted_max[i]);

    std::cout << "To add: ";
    for (size_t i = 0; i < difference.size(); ++i)
        std::cout << difference[i] << " ";
    std::cout << std::endl;

    for (size_t i = 0; i < difference.size(); ++i)
    {
        int js = getJacobstahl(false, i);
        int diff = difference.size() - index.size();
        if (diff < js)
            js = diff;
        for (int j = 0; j < js; j++)
            index.push_back((js - (j + 1)) + i);
        i += js - 1;
    }
    
    std::cout << "Index: ";
    for (size_t i = 0; i < index.size(); ++i)
        std::cout << index[i] << " ";
    std::cout << std::endl;

    for (size_t i = 0; i < index.size(); ++i)
        binary_search(result, difference[index[i]]);

    if (odd != -1){
        binary_search(result, odd);
        odd = -1;
    }

    std::cout << "Result: ";
    for (size_t i = 0; i < result.size(); i++)
        std::cout << result[i] << " ";
    std::cout << std::endl << std::endl;

    getJacobstahl(true, 0);
}

int main(int argc, char* argv[]) 
{
    if (argc < 2) 
    {
        std::cerr << "Usage: " << argv[0] << " <int1> <int2> ... <intN>" << std::endl;
        return (1);
    }

    std::vector<int> numbers;
    std::vector<int> max;
    std::vector<int> result;

    for (int i = 1; i < argc; ++i) 
    {
        int num = std::atoi(argv[i]);
        numbers.push_back(num);
    }

    algo(numbers, max, result);

    return (0);
}


