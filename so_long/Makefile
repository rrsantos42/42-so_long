
#CC			= 	gcc -fsanitize=address -g -Wall -Wextra -Werror
C			= 	gcc
CFLAGS		=
RM			= 	/bin/rm -f
NAME		= 	so_long
INCLUDES	= 	-Iheaders/
SRCS		=   $(wildcard *.c) $(wildcard src/*.c) $(wildcard src/Parser/*.c) $(wildcard src/gnl/*.c) $(wildcard src/engine/*.c) $(wildcard help_func/*.c)
OBJS		= 	$(SRCS:.c=.o)


MLX_LIB_DIR = mlx_linux/
#directories with .h

MLX_INCLUDE = -Imlx_linux

COLOUR_GREEN=\033[7;1;32m
COLOUR_END=\033[0m
COLOUR_YELLOW=\033[7;1;33m

MLX_FLAGS = -L$(MLX_LIB_DIR) -lmlx_Linux -L/usr/lib -lXext -lX11 -lm -lz

# ^ primeira dependencia
# @ nome da regra
all: $(NAME) 

$(NAME): $(OBJS)
		@$(CC) $(^) $(MLX_FLAGS) -o $(@)

%.o: %.c
	@$(CC) $(INCLUDES) $(MLX_INCLUDE) -c $(^) -o $(@)

bonus: all

clean:
	@$(RM) $(OBJS)
	@echo "\033[0;31mREMOVED OBJECT FILES\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;31mREMOVED SO_LONG EXECUTABLE\033[0m"

re: fclean all

norm :
	@norminette -R CheckForbiddenSourceHeader $(SRCS)

r:
	make re && make clean && clear && ./so_long

.PHONY: all re clean fclean