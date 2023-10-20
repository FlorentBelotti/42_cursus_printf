# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 15:56:01 by fbelotti          #+#    #+#              #
#    Updated: 2023/10/20 16:35:35 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_printf.c \
		util.c \
		print_conversion.c \

CC	= gcc -Wall -Wextra -Werror

RM	= rm -f

NAME	=	libftprintf.a

OBJS	=	$(SRC:.c=.o)

HEADER	=	ft_printf.h

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
