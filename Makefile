# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slazar <slazar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 19:16:55 by slazar            #+#    #+#              #
#    Updated: 2022/11/04 19:21:16 by slazar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_unsigned_putnbr.c ft_xxp_adress.c ft_hexxa.c

NAME	= libftprintf.a

FLAGS	= -Wall -Wextra -Werror

CC		= cc

RM		= rm -rf

OBJ		= $(SRC:.c=.o)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)
all:		$(NAME)
%.o		:	%.c
			$(CC) $(FLAGS) -c $< -o $@
clean	:
			$(RM) $(OBJ)

fclean	:		clean 
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re