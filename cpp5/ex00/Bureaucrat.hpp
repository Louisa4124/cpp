/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:14:15 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/08 12:58:08 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		Bureaucrat(void);
		
		const std::string	_name; 
		int					_grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& cpy);
		Bureaucrat& operator=(const Bureaucrat& cpy);
		~Bureaucrat(void);

		std::string getName(void) const;
		int			getGrade(void) const;

		void		setGrade(int grade);

		void		promotion(void);
		void		retrograde(void);

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

std::ostream& operator<<(std::ostream& ostream, Bureaucrat const &b);

#endif