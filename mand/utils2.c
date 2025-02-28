/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:02:31 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/28 15:54:16 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	plan(t_fractol *f)
{
	f->zoom = 1;
	f->x_start = -2.0;
	f->x_end = 2.0;
	f->y_start = 2.0;
	f->y_end = -2.0;
}

void	zoom_init(t_fractol *f)
{
	f->x_start *= f->zoom;
	f->x_end *= f->zoom;
	f->y_start *= f->zoom;
	f->y_end *= f->zoom;
}

void	fract_creat(t_fractol *f, char *str)
{
	if (!ft_strcmp(str, "mandelbrot"))
		mandelbrot(f);
	else if (!ft_strcmp(str, "julia"))
		julia(f);
}

void	fractol_render(t_fractol *f)
{
	int	x;
	int	y;

	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			set_pix_data_mandel(f, x, y);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(f->mlx_init_ptr,
		f->mlx_win_ptr, f->img.img_ptr, 0, 0);
}
