/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:39:54 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/28 21:10:58 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	color(t_fractol *f, int x, int y, int iter_n)
{
	int	color [3];

	if (iter_n == 0)
		f->img.color = BLACK;
	else
	{
		color[0] = (iter_n * 5) % 256;
		color[1] = (iter_n * 3) % 256;
		color[2] = (iter_n * 11) % 256;
		f->img.color = (colors[0] << 16) | (colors[1] << 8) | (colors[2]);
	}
	put_pixel(f, x, y, f->img.color)
}

void	put_pixel(t_fractol *f, int x, int y, int color)
{
	int	pixel;

	pixel = ((y * f->img.line_len) + (x * (f->img.bit_pix / 8)));
	*(unsigned int *)(pixel + f->img.pixel_data) = color;
}