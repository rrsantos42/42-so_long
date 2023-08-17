/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:49:05 by rsantos           #+#    #+#             */
/*   Updated: 2023/01/05 10:05:50 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// int	main(void)
// {
// 	t_vars	vars;
// 	texturs texturs;
// 	int x;
// 	int y;

// ;
// 	vars.mlx = mlx_init();
// 	vars.win = mlx_new_window(vars.mlx, 800, 600, "So_long");
// 	texturs.img = mlx_xpm_file_to_image(vars.mlx, "texturs/tile003.xpm", &texturs.x, &texturs.y);
// 	vars.player = mlx_xpm_file_to_image(vars.mlx, "texturs/player.xpm", &texturs.x, &texturs.y);
	// putbackground(&vars, texturs.img);
// 	mlx_hook(vars.win, 2, 1L<<0, putplayer, &vars);
// 	mlx_mouse_hook(vars.win, mouse_hook, &vars);
// 	printf("merda\n");
// 	mlx_loop(vars.mlx);
// }

int main()
{
	int i = 0;
	int j = 0;
	char **map;
	t_textu texturs;
	t_vars	vars;
	map = map_load("maps/map1.ber");
    while (map[i])
    {
        while (map[i][j]) {
            printf("%c", map[i][j]);
            j++;
        }
        i++;
        j = 0;
    }

	// vars.mlx = mlx_init();
	// vars.win = mlx_new_window(vars.mlx, 800, 600, "So_long");
	// texturs.img = mlx_xpm_file_to_image(vars.mlx, "texturs/tile003.xpm", &texturs.x, &texturs.y);
	// putbackground(&vars, texturs.img);
 	// mlx_loop(vars.mlx);
	if(map_parsing(map))
		printf("\nmapa valido\n");
    else
		printf("\nmapa invalido\n");
	return(0);
}
