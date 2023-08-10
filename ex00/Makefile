# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 13:35:48 by mprofett          #+#    #+#              #
#    Updated: 2023/08/08 11:43:28 by mprofett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ./Polymorphism

SRC			= Animal.cpp Cat.cpp Dog.cpp main.cpp

OBJ			= ${SRC:.cpp=.o}

CC			= g++

RM			= rm -rf

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CPPFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
