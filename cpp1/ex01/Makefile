# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 14:15:02 by lboudjem          #+#    #+#              #
#    Updated: 2023/09/18 10:14:13 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= zombie

SRCS	= main.cpp Zombie.cpp zombieHorde.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= Zombie.hpp

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
