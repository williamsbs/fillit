# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 14:20:10 by vguerand          #+#    #+#              #
#    Updated: 2017/11/23 14:19:30 by wsabates         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

INC = libft/libft.a

SRC = ft_lstlen_tetris.c ft_sqrt.c ft_exit.c ft_mapdel.c ft_solv.c \
	  ft_sizehtag.c ft_init_tetris.c ft_all_tetris.c ft_print_word.c \
	  ft_map.c ft_openfile.c ft_readfile.c ft_closefile.c main_aff.c \
	  ft_checkform.c valid_input.c ft_putleft.c ft_putup.c ft_htag.c

OBJ	= $(SRC:.c=.o)

INCLUDE	= include/fillit.h \
		  include/libft.h

$(NAME): $(OBJ)
	(cd libft ; make; make clean)
	gcc -Wall -Werror -Wextra $(OBJ) -L libft/ -lft -o $(NAME)

./%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(INC)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all
