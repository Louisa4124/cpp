# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: louisa <louisa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/25 15:09:47 by louisa            #+#    #+#              #
#    Updated: 2023/09/10 17:12:40 by louisa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= HarlFilter

SRCS	= main.cpp Harl.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= g++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= Harl.hpp

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
