NAME = libft.a

SRC_DIR = srcs
INC_DIR = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ = $(SRC:.c=.o)

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(addprefix $(SRC_DIR)/, $(OBJ))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	echo "Library $(NAME) created."

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/ft.h
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)
	echo "Object files removed."

fclean: clean
	rm -f $(NAME)
	echo "Library $(NAME) removed."

re: fclean all

.PHONY: all clean fclean re