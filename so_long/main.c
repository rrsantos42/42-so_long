/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:49:05 by rsantos           #+#    #+#             */
/*   Updated: 2022/11/16 01:24:21 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_vars	vars;
	texturs texturs;
	int x;
	int y;

;
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 800, 600, "So_long");
	texturs.img = mlx_xpm_file_to_image(vars.mlx, "texturs/tile003.xpm", &texturs.x, &texturs.y);
	vars.player = mlx_xpm_file_to_image(vars.mlx, "texturs/player.xpm", &texturs.x, &texturs.y);
	putbackground(&vars, texturs.img);
	putplayer(&vars);
	// mlx_hook(vars.win, 2, 1L<<0, playermove, &vars);
	mlx_mouse_hook(vars.win, mouse_hook, &vars);
	printf("merda\n");
	mlx_loop(vars.mlx);
}
