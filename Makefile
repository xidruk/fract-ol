NAME = fractol
MLX = libmlx.a
SRC = $(wildcard *.c) $(wildcard pflow_controller/*.c) $(wildcard data_parsing/*.c) $(wildcard fractal_torrent_manager/*.c) $(wildcard types_swapper/*.c) $(wildcard validators/*.c) $(wildcard pflow_tracer/*.c)
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror
LFLAGS = -L. -lmlx -lXext -lX11 -lm

vpath %.c . pflow_controller data_parsing fractal_torrent_manager types_swapper validators pflow_tracer

all : $(NAME)

$(NAME) : $(OBJ) $(MLX)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LFLAGS)

%.o : %.c g_header.h
	$(CC) $(CFLAGS) -c $< -o $@ 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :	fclean all

.PHONY : all clean fclean re

