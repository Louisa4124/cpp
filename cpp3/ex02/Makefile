# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 10:38:42 by lboudjem          #+#    #+#              #
#    Updated: 2023/10/03 10:56:26 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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