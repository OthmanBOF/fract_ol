/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_ol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:39:04 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/03 17:12:57 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	main(int ac, char **av)
{
	t_fractol	fract;

	if (ac == 2 && (!(ft_strcmp("mandelbrot", av[1]))))
	{
		fract.title = "Mandelbrot";
		fract_prep(&fract);
		fract_creat(&fract, fract.title);
		mlx_loop(fract.mlx_init_ptr);
	}
	else if (ac == 4 && (!(ft_strcmp("julia", av[1])))
		&& parse_args(av[2]) && parse_args(av[3]))
	{
		fract.title = "Julia";
		fract.c_julia.real = ft_atod(av[2]);
		fract.c_julia.img = ft_atod(av[3]);
		fract_prep(&fract);
		fract_creat(&fract, fract.title);
		mlx_loop(fract.mlx_init_ptr);
	}
	else
		ft_put_err("try\nmandelbrot\njulia $real $img\n", 2);
}
