/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_ol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:39:04 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/06 23:15:09 by obouftou         ###   ########.fr       */
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
	{
		ft_put_err(ERROR1 ERROR2 ERROR3 ERROR4 ERROR5 ERROR6, 2);
		ft_put_err("\ntry\nmandelbrot\njulia $real $img\n", 2);
		exit(EXIT_FAILURE);
	}
}
