/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:19:32 by rsantos           #+#    #+#             */
/*   Updated: 2022/11/16 01:09:30 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

int mouse_hook(int keycode, t_vars *vars)
{
	if(keycode)
		printf("%d\n", keycode);
	return(0);
	
}
