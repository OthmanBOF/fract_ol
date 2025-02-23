/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_ol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:39:04 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/23 19:32:06 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int main(int ac, char **av)
{
	t_fractol	fract;

	if (ac == 2 && (!(ft_strcmp("mandelbrot", av[1]))))
	{
		// set the utils for mandelbrot;;
			//set the data stucrts the work must be done on;
		fract.title = "mandelbrot";
	}
	else if (ac == 4 && (!(ft_strcmp("jullia", av[1]))) &&
				parse_args(av[2]) && parse_args(av[3]))
	{
		fract.title = "Julia";
		fract_prep(&fract);
	}

}
