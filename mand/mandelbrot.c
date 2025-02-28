/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:41:38 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/28 17:58:22 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	set_pix_data_mande(t_fractol *f, int x, int y)
{
	t_nbr_cmplx z;
	t_nbr_cmplx c;

	z.img = 0.0;
	z.real = 0.0;
	f->iter_n = 0;
	c.img = pix_cor_to_complexcor(x, f->x_start, f->x_end, WIDTH);
	c.real = pix_cor_to_complexcor(x, f->y_start, f->y_end, HEIGHT);
	while ()
	{
		
	}   
}

void	mandelbrot(t_fractol *f)
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
