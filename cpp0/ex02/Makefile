# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 14:24:48 by lboudjem          #+#    #+#              #
#    Updated: 2023/08/21 10:51:27 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= account

SRCS	= Account.cpp tests.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		= g++

FLAGS	= #-Wall -Wextra -Werror

HEADER	= Account.hpp

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