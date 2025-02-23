/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:43:44 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/23 15:43:20 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	window_creat(t_fractol *f)
{
	f->mlx_win_ptr = mlx_new_window(f->mlx_init_ptr, WIDTH, HEIGHT, f->name);

}

void	fract_prep(t_fractol *fractol)
{

	fractol->mlx_init_ptr = mlx_init();
	if (!fractol->mlx_init_ptr)
		errno("error in connection stablish \n", &fractol);
	window_creat(fractol);
	img_creat(fractol);
	event_init(fractol);

}
