# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: louisa <louisa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 10:38:42 by lboudjem          #+#    #+#              #
#    Updated: 2023/09/11 14:53:33 by louisa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

SRCS	= main.cpp ClapTrap.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= g++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= Claptrap.hpp

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean
	${MAKE} all 

%.o: %.cpp 
	$(CC) $(FLAGS) -c $<  -o $(<:.cpp=.o)

.PHONY: all clean fclean re