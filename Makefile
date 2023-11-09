# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abolor-e <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 11:14:10 by abolor-e          #+#    #+#              #
#    Updated: 2023/11/09 11:23:01 by abolor-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

SRCS		= 

OBJS		=

all:		${NAME}

${NAME}:	${OBJS}
		ar -rcs ${NAME} ${OBJS}

%.o:		%.c
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:		
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re


