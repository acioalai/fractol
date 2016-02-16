# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acioalai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/16 14:50:31 by acioalai          #+#    #+#              #
#    Updated: 2016/02/16 17:22:09 by acioalai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRCS = *.c

OBJ = *.o

WWW = -Wall -Werror -Wextra

CC = gcc $(WWW)

MLX = -L includes/minilibx_macos -lmlx -framework OpenGL -framework AppKit

LIBFT = -L libft/ -lft

all: $(NAME)

$(NAME) :
	make -C libft/
	$(CC) $(SRCS) -c -I ./includes
	$(CC) $(OBJ) -o $(NAME) $(MLX) $(LIBFT)

clean:
	make -C libft/ clean
	rm -f $(OBJ)

fclean: clean
	make -C libft/ fclean
	rm -f $(OBJ) $(NAME)

re: fclean all
