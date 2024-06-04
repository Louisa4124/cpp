/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:31:51 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/29 10:56:10 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int	main(void)
{
	int		tmp_i[5] = {0, 1, 2, 3, 4};
	char	tmp_c[7] = "hello!";

	iter(tmp_i, 5, print_template);
	std::cout << std::endl;
	
	iter(tmp_c, 7, print_template);
	return (0);
}
