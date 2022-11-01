
# NAME	= libftprintf.a

# SRC		= ft_printf.c ft_putchar.c 
# #ft_putstr.c\

# OBJ		= $(NAME:.c=.o)

# RM		= rm -f

# CC		= gcc

# FLAGS	= -Wall -Wextra -Werror

# $(NAME) : $(OBJ)
# 			ar rcs $(NAME) $(OBJ)
# %.o		: %.c
# 		  $(CC) $(FLAGS) -c $< -o $@
# all : $(NAME)

# clean : $(RM) $(OBJ)

# fclean : clean
# 		$(RM) $(NAME)

# re : fclean all
	
# .PHONY:	all clean fclean re

SRC		= ft_printf.c ft_putchar.c 
#ft_print_puthe.c ft_print_putnbr.c ft_print_putstr.c ft_print_putunbr.c

OBJ		= $(SRC:.c=.o)

NAME	= libftprintf.a

FLAGS	= -Wall -Wextra -Werror

CC		= gcc

RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

%.o		:	%.c
			$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all	