# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 15:56:01 by fbelotti          #+#    #+#              #
#    Updated: 2023/10/14 15:59:17 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_printf.c \

CC	= gcc -Wall -Wextra -Werror

RM	= rm -f

NAME	=	libftprintf.a

OBJS	=	$(SRCS:.c=.o)

HEADER	=	libftprintf.h

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) -c $< -o $@

clean :
	rm -f $(OBJS) $(OBJSBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
