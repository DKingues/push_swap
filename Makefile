# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/18 14:42:12 by dicosta-          #+#    #+#              #
#    Updated: 2024/12/18 14:50:49 by dicosta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CCFLAGS = -Wall -Wextra -Werror

NAME = push_swap.a

SRC = push_swap.c

LIBFT_DIR = ./libft/

OBJ = $(SRC:.c=.o)

all: $(NAME)
	$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) $(LIBFT_DIR)libft.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re