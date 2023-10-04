# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 14:59:35 by louisa            #+#    #+#              #
#    Updated: 2023/10/04 14:14:54 by lboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out

SRCS	= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADER	= Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

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