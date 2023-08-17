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

int is_rectangle(char **map) {
    int rows = 0;
    int cols = -1; // Set to an invalid value initially
    while (map[rows]) {
        int current_row_length = ft_strlen(map[rows]);

        // If cols is set for the first time, store its value
        if (cols == -1) {
            cols = current_row_length;
        } else if (cols != current_row_length) {
            // If any row has a different length than the first row
            return (0); // Not a rectangle
        }

        rows++;
    }

    return (1); // It's a rectangle
}
int is_valid_map(char **map, int rows, int cols) {
    int i = 0;
    int j = 0;

    // Check top row for walls
    while (j < cols) {
        if (map[0][j] != '1') {
            return (0);
        }
        j++;
    }

    // Resetting j to check bottom row
    j = 0;
    while (j < cols) {
        if (map[rows-1][j] != '1') {
            return (0);
        }
        j++;
    }

    // Check left and right columns for walls
    while (i < rows) {
        if (map[i][0] != '1' || map[i][cols-1] != '1') {
            return (0);
        }
        i++;
    }

    return (1);  // If all checks passed
}

int map_parsing(char **map_arr)
{
    if(!(is_rectangle(map_arr)))
        printf("1\n");
//    if(is_valid_map(map_arr, ft_strlen(map_arr[0]) - 1, map()->size -1))
//        return (0);
    printf("cols->%d\nrows->%d\n", ft_strlen(map_arr[0]) - 1, map()->size);
    return (1);
}