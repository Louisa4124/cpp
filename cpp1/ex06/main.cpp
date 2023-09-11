/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:55:17 by louisa            #+#    #+#             */
/*   Updated: 2023/09/04 16:35:57 by louisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	return (0);
}