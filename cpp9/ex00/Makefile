# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 10:56:48 by lboudjem          #+#    #+#              #
#    Updated: 2024/06/04 15:26:18 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= btc

SRCS	= main.cpp BitcoinExchange.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= BitcoinExchange.hpp

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

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