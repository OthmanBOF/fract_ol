/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_ol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:39:04 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/23 21:42:01 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int main(int ac, char **av)
{
	t_fractol	fract;

	if (ac == 2 && (!(ft_strcmp("mandelbrot", av[1]))))
	{
		fract.title = "Mandelbrot";
		fract_prep(&fract);
	}
	else if (ac == 4 && (!(ft_strcmp("jullia", av[1]))) &&
				parse_args(av[2]) && parse_args(av[3]))
	{
		fract.title = "Julia";
		fract_prep(&fract);
	}

}
