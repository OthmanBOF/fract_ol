/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:43:44 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/23 22:02:08 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	window_creat(t_fractol *f)
{
	f->mlx_win_ptr = mlx_new_window(f->mlx_init_ptr, WIDTH, HEIGHT, f->name);
	if (!f->mlx_win_ptr)
	{
		mlx_destroy_window(f->mlx_init_ptr, f->mlx_win_ptr);
		free(f->mlx_init_ptr);
		ft_put_err("window creation error\n", 2);
	}
}

void	img_creat(t_fractol *f)
{
	f->img.img_ptr = mlx_new_image(f->mlx_init_ptr, WIDTH, HEIGHT);
	if (!f->img.img_ptr)
	{
		mlx_destroy_image(f->mlx_init_ptr, f->img.img_ptr);
		free(f->mlx_init_ptr);
		ft_put_err("img creation error\n", 2);
	}
	mlx_get_data_addr(f->img.pix_data, \
		&f->img.bit_pix, &f->img.line_len, &f->img.endian);
}

void	event_init(t_fractol *f)
{

}

void	fract_prep(t_fractol *fractol)
{
	fractol->mlx_init_ptr = mlx_init();
	if (!fractol->mlx_init_ptr)
		ft_put_err("connection error\n", 2);
	window_creat(fractol);
	img_creat(fractol);
	plan(fractol);
}
