/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:42:21 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/08 15:59:18 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm& cpy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& cpy);
		
		std::string	_target;

	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);

		void	execute(Bureaucrat const & executor) const;
};

#endif
