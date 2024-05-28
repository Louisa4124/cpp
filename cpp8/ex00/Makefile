# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 10:42:09 by lboudjem          #+#    #+#              #
#    Updated: 2024/05/28 10:42:33 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= easyfind

SRCS	= main.cpp 

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= easyfind.hpp

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(OBJS) -o $(NAME)

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