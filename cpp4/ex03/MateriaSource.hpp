/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:04:25 by lboudjem          #+#    #+#             */
/*   Updated: 2023/10/05 15:05:19 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIA_SOURCE_H__
# define _MATERIA_SOURCE_H__

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	
	private	:

	public	:

		MateriaSource(void);
		MateriaSource(const MateriaSource& src);
		MateriaSource&	operator=(const MateriaSource& src);
		~MateriaSource(void);


		void	learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};

#endif
