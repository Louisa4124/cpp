/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:04:30 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 11:51:14 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int n)
{
    _values.reserve(n);
    _max_n = n;
}

Span::Span(const Span &cpy)
{
    _values = cpy._values;
    _max_n = cpy._max_n;
}

Span::~Span()
{}

Span    &Span::operator=(const Span &cpy)
{
    if (this == &cpy)
		return (*this);
    _values = cpy._values;
    _max_n = cpy._max_n;
    return (*this);
}

void    Span::addNumber(int n)
{
    if (_values.size() < _max_n)
        _values.push_back(n);
    else
        throw std::length_error("Cannot add more number");
}

void    Span::addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    int i;

    i = std::distance(begin, end);
    if (i > static_cast<int>(_max_n - _values.size() + 1))
        throw std::length_error("Cannot add more number");
    for (std::vector<int>::iterator it = begin; it != end; it++)
        _values.push_back(*it);
}

int Span::shortestSpan(void)
{
    std::vector<int>    tmp;
    int                 span = -1;

    if (_values.size() <= 1)
        throw std::length_error("No Span can be found");
    
    tmp = _values;
    std::sort(tmp.begin(), tmp.end());
    for (size_t i = 1; i < tmp.size(); i++)
    {
        if (span == -1 || span > (tmp[i] - tmp[i - 1]))
            span = tmp[i] - tmp[i - 1];
    }
    return (span);
}

int Span::longestSpan(void)
{
    std::vector<int>    tmp;
    int                 span = -1;

    if (_values.size() <= 1)
        throw std::length_error("No Span can be found");
    tmp = _values;
    std::sort(tmp.begin(), tmp.end());
    span = tmp[tmp.size() - 1] - tmp[0];

    return (span);
}
