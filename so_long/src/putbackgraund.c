/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putbackgraund.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:25:41 by rsantos           #+#    #+#             */
/*   Updated: 2022/11/16 01:07:17 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    putbackground(t_vars *vars, void *img)
{

    int x;
    int y;
    
    x = 0;
    y =0;
    while(y < 600){
		while(x < 800)
        {
			mlx_put_image_to_window(vars->mlx, vars->win, img, x, y);
            x += 32;
        }
        x = 0;
        y += 32;
    }
    printf("%d\ntreata\n%d\n", vars->pos1,vars->pos2);
}