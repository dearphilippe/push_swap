# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: passef <passef@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/23 22:58:59 by passef            #+#    #+#              #
#    Updated: 2018/02/05 15:09:00 by passef           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft/libft.a
EXEC =		push_swap

SRC =		libft/ft_putstr.c \
			libft/ft_strlen.c \
			libft/ft_strcmp.c \
			srcs/init_e.c \

OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
LFT = -C libft/
GREEN = \033[92m
PURPLE = \033[095m
NORM = \033[0m
ERASE = \033[K
CURSORUP = \033[1A

all: $(NAME)
$(NAME): $(OBJ)
	@echo "$(ERASE)$(PURPLE)[Wolf] :$(NORM) $(GREEN)Creating Library$(NORM) $(CURSORUP)";
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@$(CC) $(FLAGS) srcs/push_swap.c $(NAME) -o $(EXEC)
	@echo "$(ERASE)$(PURPLE)[Wolf] :$(NORM) $(GREEN)Wolf Compiled!$(NORM)";
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(ERASE)$(PURPLE)[Wolf] :$(NORM) $(GREEN)Compiling $<$(NORM) $(CURSORUP)";
clean:
	@$(RM) $(OBJ)
	@cd libft && make clean
	@echo "$(ERASE)$(PURPLE)[Wolf] :$(NORM) $(GREEN)Cleaning Object files $(NORM)";
fclean: clean
	@$(RM) $(NAME)
	@echo "$(ERASE)$(PURPLE)[Wolf] :$(NORM) $(GREEN)Cleaning Wolf $(NORM)";
re: fclean all