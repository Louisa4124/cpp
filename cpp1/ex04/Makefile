# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 12:17:49 by lboudjem          #+#    #+#              #
#    Updated: 2023/09/18 10:14:39 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex04

SRCS	= main.cpp 

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= 

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