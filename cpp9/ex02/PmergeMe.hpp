/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:56:44 by lboudjem          #+#    #+#             */
/*   Updated: 2024/06/01 16:14:16 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>

std::vector<int>    extract_max_from_pairs(const std::vector<int>& numbers) ;
void                sort_pair(std::vector<int>& numbers);
void                binary_search(std::vector<int>& result, int value);

#endif