/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:43:44 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/23 14:44:26 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	fract_prep(t_fractol *fractol)
{

	fractol->mlx_init_ptr = mlx_init();
	if (!fractol->mlx_init_ptr)
		errno("error in connection stablish \n", &fractol);
	window_creat(fractol);//tp do
	img_creat(fractol);//to do
	event_init(fractol);// to do

}
