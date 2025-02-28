/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:02:31 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/28 17:53:21 by obouftou         ###   ########.fr       */
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
