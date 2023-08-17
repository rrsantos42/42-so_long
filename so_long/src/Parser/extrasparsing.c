/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extrasparsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:36:52 by rsantos           #+#    #+#             */
/*   Updated: 2023/01/05 10:06:00 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void extracheck(char **map_arr)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (map_arr[i])
    {
        while (map_arr[i][j])
        {
            if (map_arr[i][j] == 'E')
                map()->colect += 1;
            if (map_arr[i][j] == 'P')
                map()->playerpos += 1;
            if (map_arr[i][j] == 'C')
                map()->exit += 1;
            j++;
        }
        i++;
        j = 0;
    }
}

int	parsing_checkextras(char **map_arr)
{
	extracheck(map_arr);
	if (map()->colect < 1)
		return (0);
	if (map()->playerpos != 1)
		return (0);
	if (map()->exit != 1)
		return (0);
	return(1);
}