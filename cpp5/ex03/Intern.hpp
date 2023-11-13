/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:23:27 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/13 12:38:57 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern 
{
	private:
		AForm* makePardon(std::string target);
		AForm* makeRobotomy(std::string target);
		AForm* makeShrubbery(std::string target);

	public:
		Intern(void);
		Intern(const Intern& cpy);
		Intern& operator=(const Intern& cpy);
		~Intern(void);

		AForm* makeForm(std::string formType, std::string target);
};

#endif