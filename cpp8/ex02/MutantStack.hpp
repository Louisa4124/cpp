/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:25:20 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 13:18:05 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
        MutantStack(){}; //std::stack<T>() is automatic
        MutantStack(MutantStack& cpy) : std::stack<T>(cpy) {};
        ~MutantStack(){};
        MutantStack& operator=(MutantStack& cpy)
        {
            if (&cpy == this)
                return (*this);
            this->std::stack<T>::operator=(cpy);
            return (*this);
        };

        typedef typename std::stack<T>::container_type::iterator	iterator;
        
        iterator begin()
        {
            return(this->c.begin());
        };
        iterator end()
        {
            return(this->c.end());
        };
};


#endif