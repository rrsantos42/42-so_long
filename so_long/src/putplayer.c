/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putplayer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:47:18 by rsantos           #+#    #+#             */
/*   Updated: 2022/11/16 01:24:38 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void putplayer(t_vars *vars, void img)
{

    mlx_put_image_to_window(vars->mlx, vars->win, &vars->player, vars->pos1, vars->pos2);
}