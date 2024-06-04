/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:37:39 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/04 12:42:53 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool is_operator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return (true);
    return (false);
}

int apply_operator(char c, int a, int b)
{
    if (c == '+')
        return (a + b);
    else if (c == '-')
        return (a - b);
    else if (c == '*')
        return (a * b);
    else if (c == '/')
    {
        if (b == 0)
            throw std::runtime_error("Error : division by zero");
        return (a / b);
    }
    else
        throw std::invalid_argument("Error");
}

void RPN(std::string str)
{
    std::stack<int>    stack;
    int                result;
    std::istringstream iss(str);
    std::string        token;

    while (iss >> token) 
    {
        if (std::isdigit(token[0])) 
        {
            std::stringstream ss(token);
            int number;
            ss >> number;
            stack.push(number);
        }
        else if (is_operator(token[0])){
            if (stack.size() < 2)
                throw std::runtime_error("Error");
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            result = apply_operator(token[0], a, b);
            stack.push(result);
        }
    }
    if (stack.size() == 1) 
        std::cout << stack.top() << std::endl;
    else 
        throw std::runtime_error("Error");
}




