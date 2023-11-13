/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:29:28 by lboudjem          #+#    #+#             */
/*   Updated: 2023/11/13 13:27:57 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{	
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), 
													_target(target)
{	
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : AForm("ShrubberyCreationForm", 145, 137),
																_target(cpy._target)

{
	std::cout << "Copy constructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& cpy) 
{
	if (this == &cpy)
		return (*this);
	_target = cpy._target;
	std::cout << "Default Operator called" << std::endl;
	return (*this);
};

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->canExec(executor.getGrade());
	std::fstream	file((this->_target + "_shrubbery").c_str() , std::ios::out);
	file.exceptions(std::ofstream::failbit);
	
	file 
	<< "                                                .    " << std::endl          
	<< "                                     .         ;     " << std::endl              
	<< "        .              .              ;%     ;;      " << std::endl              
	<< "          ,           ,                :;%  %;       " << std::endl         
	<< "           :         ;                   :;%;'     .," << std::endl               
	<< "  ,.        %;     %;            ;        %;'    ,;  " << std::endl                
	<< "    ;       ;%;  %%;        ,     %;    ;%;    ,%'   " << std::endl                
	<< "     %;       %;%;      ,  ;       %;  ;%;   ,%;'    " << std::endl                
	<< "      ;%;      %;        ;%;        % ;%;  ,%;'      " << std::endl                  
	<< "       `%;.     ;%;     %;'         `;%%;.%;'        " << std::endl                  
	<< "        `:;%.    ;%%. %@;        %; ;@%;%'           " << std::endl                  
	<< "           `:%;.  :;bd%;          %;@%;'             " << std::endl                  
	<< "             `@%:.  :;%.         ;@@%;'              " << std::endl                          
	<< "               `@%.  `;@%.      ;@@%;                " << std::endl                   
	<< "                 `@%%. `@%%    ;@@%;                 " << std::endl                        
	<< "                   ;@%. :@%%  %@@%;                  " << std::endl                       
	<< "                     %@bd%%%bd%%:;                   " << std::endl          
	<< "                       #@%%%%%:;;                    " << std::endl                      
	<< "                       %@@%%%::;                     " << std::endl                  
	<< "                       %@@@%(o);  . '                " << std::endl                                  
	<< "                       %@@@o%;:(.,'                  " << std::endl                              
	<< "                   `.. %@@@o%::;                     " << std::endl                  
	<< "                      `)@@@o%::;                     " << std::endl                               
	<< "                       %@@(o)::;                     " << std::endl                        
	<< "                      .%@@@@%::;                     " << std::endl                            
	<< "                      ;%@@@@%::;.                    " << std::endl                          
	<< "                     ;%@@@@%%:;;;.                   " << std::endl                           
	<< "                 ...;%@@@@@%%:;;;;,..                " << std::endl;              

	file.close();
}
