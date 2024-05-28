/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:31:51 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 13:46:12 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	add_int(int& i) {i++;}

void	to_upper(char& c) 
{
	if (islower(c))
		c -= 32;
}

int	main(void)
{
	int		tmp_i[5] = {0, 1, 2, 3, 4};
	char	tmp_c[7] = "hello!";

	iter(tmp_i, 5, print_template);
	std::cout << std::endl;
	
	iter<int, size_t>(tmp_i, 5, add_int);
	iter<int, size_t>(tmp_i, 5, print_template);
	std::cout << std::endl;
	
	iter<char, size_t>(tmp_c, 7, print_template);
	std::cout << std::endl;
	
	iter<char, size_t>(tmp_c, 7, to_upper);
	iter(tmp_c, 7, print_template);
	std::cout << std::endl;
	return (0);
}