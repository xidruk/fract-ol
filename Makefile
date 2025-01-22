NAME = fractol
MLX_DIR = ./mlx
MLX = $(MLX_DIR)/libmlx.a
SRC = main.c
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror
LFLAGS = -L$(MLX_DIR) -lmlx -lXext -lX11 -lm

all : $(NAME)

$(NAME) : $(OBJ) $(MLX)
	$(CC) $(CFLAGS) $(OBJ) $(LFLAGS) -o $(NAME)

$(MLX):
	@echo "Building MiniLibX..."
	@make -C $(MLX_DIR)

%.o : %.c g_header.h
	$(CC) $(CFLAGS) -c $< -o $@ -I$(MLX_DIR)

clean :
	rm -f $(OBJ)
	make -C $(MLX_DIR) clean

fclean : clean
	rm -f $(NAME)

re :	fclean all

.PHONY : all clean fclean re
