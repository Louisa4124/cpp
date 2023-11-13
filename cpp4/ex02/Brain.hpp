/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:31:25 by louisa            #+#    #+#             */
/*   Updated: 2023/11/02 12:50:42 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_H__
# define _BRAIN_H__

# include <iostream>

class Brain 
{
	protected	:
		std::string	_ideas[100];

	public	:
		Brain(void);
		Brain(const Brain& cpy);
		Brain&	operator=(const Brain& cpy);
		virtual ~Brain(void);

		void	setIdeas(std::string ideas);
};

#endif
