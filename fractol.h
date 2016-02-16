/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 10:01:50 by acioalai          #+#    #+#             */
/*   Updated: 2016/02/16 15:45:22 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <math.h>

# define WIDTH 1500
# define HEIGHT 1500
# define MAX 256

typedef struct	s_all
{
	float	x;
	float	y;
	void	*mlx;
	void	*win;	
	float	gx;
	float	gy;
	
}				t_all;

#endif
