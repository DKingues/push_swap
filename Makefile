# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/18 14:42:12 by dicosta-          #+#    #+#              #
#    Updated: 2024/12/30 17:45:38 by dicosta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CCFLAGS = -Wall -Wextra -Werror

NAME = push_swap.a

SRC = push_swap.c lists_management.c transformer.c

LIBFT_DIR = ./libft/

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	make -C $(LIBFT_DIR)
	ar rcs $(NAME) $(OBJ) $(LIBFT_DIR)libft.a

clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean
	
fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re