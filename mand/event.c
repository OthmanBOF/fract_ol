/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:46:03 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/03 03:45:15 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

static int	_close(t_fractol *f)
{
	mlx_destroy_image(f->mlx_init_ptr, f->img.img_ptr);
	mlx_destroy_window(f->mlx_init_ptr, f->mlx_win_ptr);
	exit(0);
	return (0);
}

static int	_event(int key, t_fractol *f)
{
	if (key == 53)
		_close(f);
	return (0);
}
static int	_zoom(int key, int x, int y, t_fractol *f)
{
	(void)x;
	(void)y;
	if (key == 4)
		f->zoom = 1.05;
	else if(key == 5)
		f->zoom = 0.95;
	else
		return (0);
	fract_creat(f, f->title);
	return (0);
}

void	event_init(t_fractol *f)
{
	mlx_hook(f->mlx_win_ptr, 17, 0, _close, f);
	mlx_hook(f->mlx_win_ptr, 2, 0, _event, f);
	mlx_mouse_hook(f->mlx_win_ptr, _zoom, f);
}
