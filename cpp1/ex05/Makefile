# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 15:37:36 by lboudjem          #+#    #+#              #
#    Updated: 2023/09/18 10:14:48 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex05

SRCS	= main.cpp Harl.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= Harl.hpp

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