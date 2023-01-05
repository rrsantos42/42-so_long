/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:59:27 by rsantos           #+#    #+#             */
/*   Updated: 2022/11/17 19:37:55 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "get_next_line.h"
int fstndlst_line_parse(char *line)
{    
    int i;
    i = 0;
    if(!line)
        return(0);
    while (line[i + 1])
    {
        if(line[i] != '1')
            return (0);
        i++;
    }        
    return (1);
}

int mid_line_parse(char *line)
{
    int i;
    if (!line)
        return (0);
    i = 0;
    while (line[i + 1])
        i++;
    if (line[0] != '1' || line[i - 1] != '1')
        return (0);
    return (1);
}


int map_parsing(char **map_arr)
{
    int i;
    int flag;

    flag = 0;
    i = 0;
    if (!fstndlst_line_parse(map_arr[0]) || !fstndlst_line_parse(map_arr[(map()->size) - 1]))
        return (0);
    while (map_arr[i++] && i < (map()->size - 1))
    {
        flag = mid_line_parse(map_arr[i]);
        if (!flag)
            return(0);
    }
    flag = parsing_checkextras(map_arr);
    if (!flag)
        return (0);
    return(1);
}