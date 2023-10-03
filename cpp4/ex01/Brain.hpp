/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisa <louisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:31:25 by louisa            #+#    #+#             */
/*   Updated: 2023/09/12 16:35:33 by louisa           ###   ########.fr       */
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

		std::string	getIdeas(void) const;
		void	setIdeas(std::string ideas);
};

#endif
