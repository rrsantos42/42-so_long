/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:17:28 by rsantos           #+#    #+#             */
/*   Updated: 2022/11/16 01:20:26 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H

#define SO_LONG_H

#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct	s_vars {
	void	*mlx;
	void	*win;
	void *player;
	int 	pos1;
	int 	pos2;
	int		flag;
}				t_vars;

typedef struct texturs {
	
	void *img;
	int x;
	int y;
}		texturs;

int	close(int keycode, t_vars *vars);
int mouse_hook(int keycode, t_vars *vars);
void    putbackground(t_vars *vars, void *img);
void putplayer(t_vars *vars);
int playermove(int keycode, t_vars *vars);

#endif