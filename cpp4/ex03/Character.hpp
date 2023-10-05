/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:18:33 by lboudjem          #+#    #+#             */
/*   Updated: 2023/10/05 14:34:17 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_H__
# define _CHARACTER_H__
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private	:
		AMateria	_inventory[4];
		std::string	_name;

	public	:
		Character(void);
		Character(std::string name);
		Character(const Character& src);
		Character&	operator=(const Character& src);
		~Character(void);

		AMateria	getInventory(void) const;
		void	setInventory(AMateria inventory);

		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
