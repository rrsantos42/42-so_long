/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:51:21 by rsantos           #+#    #+#             */
/*   Updated: 2022/11/17 01:51:08 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "gnl/get_next_line.h"

char    **map_load(char *path)
{
    int i;
    int fd;
    int flag;
    char **maps;
    i = 0;
    flag = 0;
    fd = open(path,  O_RDONLY);
    while (get_next_line(fd))
        i++;
    map()->size = i;
    maps = (char **)malloc((i + 1) * sizeof(char *));
    close(fd);
    fd = open(path,  O_RDONLY);
    i = 0;
    while (1)
    {
        maps[i] = get_next_line(fd);
        if (!maps[i])
            break;   
        i++;
    }
    return(maps);
}