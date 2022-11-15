/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:49:05 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/20 17:56:30 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	close(int keycode, t_vars *vars)
{
	if (keycode == 65307)
		mlx_destroy_window(vars->mlx, vars->win);
	if (keycode)
		printf("%d\n", keycode);
	return (0);
}

int mouse_hook(int keycode, t_vars *vars)
{
	if(keycode)
		printf("%d\n", keycode);
	
	return(0);
	
}

// int	resize(int keycode, t_vars *vars)
// {
// 	if (mlx_mouse_move(vars->mlx, vars->win,))
// }
int	main(void)
{
	t_vars	vars;
	int size_x = 800;
	int size_y = 600;
	int x;
	int y;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, size_x, size_y, "Hello world!");
	mlx_hook(vars.win, 2, 1L<<0, close, &vars);
	mlx_mouse_hook(vars.win, mouse_hook, &vars);
	// mlx_hook(vars.win, 25, 1L<<0, resize, &vars);
	mlx_loop(vars.mlx);
}
