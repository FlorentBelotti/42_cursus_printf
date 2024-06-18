# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 15:56:01 by fbelotti          #+#    #+#              #
#    Updated: 2024/06/18 15:30:09 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
AUTHOR = Florent Belotti

CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEBUG_FLAGS = -g -O0

SRCDIR = Src
INCDIR = Includes
OBJDIR = Obj

SRC = $(shell find $(SRCDIR) -name \*.c -type f -print)

OBJ = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))

DEPS = $(OBJ:.o=.d)

INCLUDES = -I$(INCDIR)

all: intro $(NAME)

intro:
	@echo "\n==================================="
	@echo "Compiling:	$(NAME)"
	@echo "Author:		$(AUTHOR)"
	@echo "===================================\n"

$(NAME): $(OBJ)
	@echo "ft_printf: Creating library $@..."
	@ar rcs $@ $(OBJ)
	@echo "ft_printf: Library $@ created.\n"

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft_printf.h
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -MMD -c $< -o $@

-include $(DEPS)

clean:
	@echo "ft_printf: clean: Cleaning object files..."
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "ft_printf: fclean: Cleaning all build files..."
	@rm -f $(NAME)

re: fclean all

debug: CFLAGS += $(DEBUG_FLAGS)
debug: re

.PHONY: all clean fclean re debug intro

