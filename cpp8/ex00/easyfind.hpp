/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:42:12 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 10:57:41 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexcept>
# include <algorithm>
# include <iostream>

template <typename T>
void easyfind(T &t, int i)
{
    typename T::iterator it;

    it = std::find(t.begin(), t.end(), i);
    if (it == t.end())
        throw std::invalid_argument("Number not found !");
}

#endif