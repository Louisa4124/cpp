# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 14:14:30 by lboudjem          #+#    #+#              #
#    Updated: 2023/11/13 13:28:29 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bureaucrat

SRCS	= 	main.cpp					\
			AForm.cpp					\
			Bureaucrat.cpp				\
			RobotomyRequestForm.cpp		\
			ShrubberyCreationForm.cpp	\
			PresidentialPardonForm.cpp 

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	=	AForm.hpp					\
 			Bureaucrat.hpp				\
			RobotomyRequestForm.hpp		\
			ShrubberyCreationForm.hpp	\
			PresidentialPardonForm.hpp

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	${RM} ${OBJS}
	rm *_shrubbery

fclean: clean
	${RM} ${NAME}

re:	fclean
	${MAKE} all 

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<  -o $(<:.cpp=.o)

.PHONY: all clean fclean re