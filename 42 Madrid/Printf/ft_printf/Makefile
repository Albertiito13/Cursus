
NAME = libftprintf.a
SRC = ft_printf.c ft_utils.c ft_hex.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compilando..."
	$(AR) $(NAME) $(OBJ)
	@echo "Compilado!"
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
