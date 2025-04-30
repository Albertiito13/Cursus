
NAME		= libftprintf.a

SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= include
LIBFT_DIR	= libft/

SRC			= ft_printf.c \
			  dispatcher.c \
			  print/ft_print_char.c \
			  print/ft_print_str.c \
			  print/ft_print_nbr.c \
			  print/ft_print_unsigned.c \
			  print/ft_print_hex.c \
			  print/ft_print_ptr.c

SRC			:= $(addprefix $(SRC_DIR)/, $(SRC))
OBJ			:= $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I$(INC_DIR) -I$(LIBFT_DIR)

AR			= ar rcs
RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C $(LIBFT_DIR)
	@$(RM) $(OBJ_DIR)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
