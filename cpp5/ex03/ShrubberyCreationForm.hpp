/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:29:31 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/08 15:59:31 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCHRUBBERY_HPP
# define SCHRUBBERY_HPP

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& cpy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& cpy);

		std::string	_target;
		
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);

		void	execute(Bureaucrat const & executor) const;

};

#endif
