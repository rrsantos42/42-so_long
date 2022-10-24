/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:49:05 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/20 17:56:30 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

int main(void){

	void* program;
	void* window1;
	program = mlx_init();
	window1 = mlx_new_window(program, 800, 600, "qualquercoisa");
	mlx_loop(program);
	return(0);
}
