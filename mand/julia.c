/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:41:41 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/02 03:40:02 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	set_pix_data_jul(t_fractol *f, int x, int y)
{
	t_nbr_cmplx z;

	z.img = pix_cor_to_complexcor(x, f->x_start, f->x_end, WIDTH);;
	z.real = pix_cor_to_complexcor(y, f->x_start, f->x_end, HEIGHT);;
	f->iter_n = 0;
	while (f->iter_n < MAX_ITER)
	{
		z = sum_complex(pow_comp2(z), f->c_julia);
		if ((z.real * z.real) + (z.img * z.img) > 4)
		{
			color(f,x,y,f->iter_n);
			return ;
		}
		f->iter_n++;
	}
	put_pixel(f, x, y, BLACK);
}

void	julia(t_fractol *f)
{
	int	x;
	int	y;

	y = 0;
	zoom_init(f);
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			set_pix_data_jul(f, x, y);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(f->mlx_init_ptr,
		f->mlx_win_ptr, f->img.img_ptr, 0, 0);
}
