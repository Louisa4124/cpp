# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 10:38:42 by lboudjem          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/09/12 11:11:22 by louisa           ###   ########.fr        #
=======
#    Updated: 2023/09/18 10:15:35 by lboudjem         ###   ########.fr        #
>>>>>>> 45828db2c32dea56758439121793d7fd90e9a5c9
#                                                                              #
# **************************************************************************** #

NAME	= a.out

SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= ClapTrap.hpp ScavTrap.hpp

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

%.o: %.cpp 
	$(CC) $(FLAGS) -c $<  -o $@

.PHONY: all clean fclean re