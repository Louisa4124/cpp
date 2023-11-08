/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:23:42 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/08 15:03:38 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		Form(void);
		Form(const Form& cpy);
		Form& operator=(const Form& cpy);
		
		const std::string	_name; 
		const int			_gradeSign;
		const int			_gradeExec;
		bool				_signed;

	public:
		Form(std::string name, int gradeSign, int gradeExec);
		~Form(void);

		std::string getName(void) const;
		bool		getSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;

		void		beSigned(Bureaucrat& b);

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

std::ostream& operator<<(std::ostream& ostream, Form const &b);

#endif