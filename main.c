/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 10:01:33 by acioalai          #+#    #+#             */
/*   Updated: 2016/02/16 17:22:07 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int argc, char **argv)
{
	t_all	all;
	float	row;
	float	col;
	int		index;
	float	x_new;
	
	
	if (argc != 2)
	{
		puts("Error");
			return(0);
	}
	argv++;
	all.mlx = mlx_init();
	row = 0;
	while (row < HEIGHT)
	{
		col = 0;
		while (col < WIDTH)
		{
			all.gx = (col - WIDTH/2.0)*4.0/WIDTH;
			all.gy = (row - HEIGHT/2.0)*4.0/WIDTH;
			all.x = 0;
		   	all.y = 0;
			index = 0;
			while (all.x * all.x + all.y * all.y <= 4 && index < MAX)
			{
				x_new = all.x * all.x - all.y * all.y + all.gy;
				all.y = 2*all.x*all.y + all.gy;
				all.x = x_new;
				index++;
			}
			if (index < MAX)
				mlx_pixel_put(all.mlx, all.win, 0, 0, 0x00e83030 * index);
			else
				mlx_pixel_put(all.mlx, all.win, 0, 0, 0x00000000);
			col++;
		}
		row++;
	}
	return (0);
}
