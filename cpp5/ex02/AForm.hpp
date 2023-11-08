/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:23:42 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/08 15:03:38 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		AForm(void);
		AForm(const AForm& cpy);
		AForm& operator=(const AForm& cpy);
		
		const std::string	_name; 
		const int			_gradeSign;
		const int			_gradeExec;
		bool				_signed;

	public:
		AForm(std::string name, int gradeSign, int gradeExec);
		virtual ~AForm(void);

		std::string	 	getName(void) const;
		bool			getSigned(void) const;
		int				getGradeSign(void) const;
		int				getGradeExec(void) const;

		virtual void	beSigned(Bureaucrat& b) ;

		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Grade is too high";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Grade is too low";
				}
		};
};

std::ostream& operator<<(std::ostream& ostream, AForm const &b);

#endif