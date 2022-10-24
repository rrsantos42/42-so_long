
#CC			= 	gcc -fsanitize=address -g
CC			= 	gcc
CFLAGS		= 	-Wall -Wextra -Werror -fsanitize=address
RM			= 	/bin/rm -f
NAME		= 	so_long
INCLUDES	= 	-Iheaders/
SRCS		=   main.c $(shell find src/ -name '*.c')
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

m: fclean

v:
	@make re && make clean && clear && valgrind --leak-check=full --log-file="logfile.out" -v ./cub3D
r:
	@make re && make clean && clear && ./cub3D map/map3.car map/map1.car map/map2.car

rr:
	@make re && make clean && clear && ./cub3D map/map1.car


.PHONY: all re clean fclean m