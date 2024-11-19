NAME = libftprintf.a
CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_printf.c ft_putnbr.c ft_uputnbr.c \
	  ft_putstr.c ft_hexadecimal.c ft_adress.c

OBJ = $(SRC:.c=.o) 

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $?

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re