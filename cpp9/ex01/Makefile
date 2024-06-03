# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 14:34:56 by lboudjem          #+#    #+#              #
#    Updated: 2024/06/03 14:35:16 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= RPN

SRCS	= main.cpp RPN.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= RPN.hpp

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(OBJS) $(FLAGS) -o $(NAME)

all:	$(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean
	${MAKE} all 

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<  -o $(<:.cpp=.o)

.PHONY: all clean fclean re