/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:04:33 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 11:47:04 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <vector>
# include <iterator>

class Span
{
    private:
        std::vector<int>    _values;
        unsigned int        _max_n;
        
        Span();
        Span    &operator=(const Span &cpy);
        
    public:
        Span(unsigned int n);
        Span(const Span &cpy);
        ~Span();

        void    addNumber(int n);
        void    addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int     shortestSpan(void);
        int     longestSpan(void);
};

#endif
