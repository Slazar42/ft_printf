# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slazar <slazar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 19:16:55 by slazar            #+#    #+#              #
#    Updated: 2022/11/04 22:14:49 by slazar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_unsigned_putnbr.c ft_xxp_adress.c ft_hexxa.c\

OBJ	= $(SRC:.c=.o)


FLAGS    = -Wall -Wextra -Werror


all:	$(NAME)

$(NAME):    $(OBJ)
	    ar rcs $(NAME) $(OBJ)

%.o	:    %.c
	    cc $(FLAGS) -c $< -o $@

clean:
	    rm -f $(OBJ)

fclean:	clean
	    rm -f $(NAME)

re:	    fclean all 
