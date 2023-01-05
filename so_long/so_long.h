/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:17:28 by rsantos           #+#    #+#             */
/*   Updated: 2022/11/21 15:58:31 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H

#define SO_LONG_H

#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>


typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

typedef struct s_map
{
	int size;
	int colect;
	int exit;
	int	playerpos;
}				t_map;

typedef struct s_textu {
	
	void *img;
	int x;
	int y;
}		t_textu;

t_map	*map();
int		close_w(int keycode, t_vars *vars);
int		mouse_hook(int keycode, t_vars *vars);
void	putbackground(t_vars *vars, void *img);
void	putplayer(int keycode, t_vars *vars);
int		playermove(int keycode, t_vars *vars);
int		map_parsing(char **map_arr);
char	**map_load(char *path);
void	extracheck(char **map_arr);
int		parsing_checkextras(char **map_arr);
#endif