/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:31:47 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 13:44:41 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void print_template(T &i)
{
	std::cout << i << std::endl;
}

template <typename T, typename V>
void iter(T* addr, V len, void forEach(T&))
{
    for (V i = 0; i < len; i++)
        forEach(addr[i]);
}

#endif