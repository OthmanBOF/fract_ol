/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:02:31 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/06 23:15:35 by obouftou         ###   ########.fr       */
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
	if (ft_strcmp(str, "Mandelbrot") == 0)
		mandelbrot(f);
	else if (ft_strcmp(str, "Julia") == 0)
		julia(f);
}

double	pix_cor_to_complexcor(double val, double min, double max, double range)
{
	return ((val / range) * (max - min) + min);
}

int	ft_isspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	return (i);
}
