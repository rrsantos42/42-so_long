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

#include "../../so_long.h"

int is_rectangle(char **map_arr) {
    int rows = 0;
    int collen;
    int current_row_length;

    collen = ft_strlen(map_arr[rows]) -1;
    while (map_arr[rows]) {
        current_row_length = ft_strlen(map_arr[rows]) - 1;
        if (rows == map()->size - 1)
            current_row_length += 2;
        if (collen != current_row_length)
            return (0);
        rows++;
    }
    return (1);
}
int is_valid_map(char **map, int rows, int cols) {
    int i = 0;
    int j = 0;

    while (j < cols) {
        if (map[0][j] != '1')
            return (0);
        j++;
    }

    j = 0;
//        printf("é isto->%c\n",map[1][rows -3]);
    while (j < cols) {
        if (map[j][rows -3] != '1')
            return (0);
        j++;
    }

    while (i < cols) {
        if (map[i][0] != '1') {
            return (0);
        }
        i++;
    }

    return (1);
}
int validchar(char c)
{
    if (c != 'P' && c != 'C'&& c != 'E'&& c != '0' && c != '1')
        return (0);
    return (1);
}
int checker(char **map_arr)
{
    int i;
    int j;

    i = 0;
    while (map_arr[i])
    {
        j = 0;
        while (map_arr[i][j + 2])
        {
            if(!(validchar(map_arr[i][j])))
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int map_parsing(char **map_arr)
{
    if(!(is_rectangle(map_arr)))
        return (0);
    if(!(checker(map_arr)))
        return (0);
    if(!(is_valid_map(map_arr, ft_strlen(map_arr[0]), map()->size)))
       return (0);
    if(!(parsing_checkextras(map_arr)))
        return (0);
    return (1);
}