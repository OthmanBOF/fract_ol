/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_ol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:39:04 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/22 21:03:16 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	fract_prep(t_fractol *f)
{

	f->mlx_init_ptr = mlx_init();
	if (f->mlx_init_ptr == NULL)
		errno("error in connection stablish \n", &f);
	
}


int main(int ac, char **av)
{
	t_fractol	fract;

	if (ac == 2 && (!(ft_strcmp("mandelbrot", av[1]))))
	{
		// set the utils for mandelbrot;;
			//set the data stucrts the work must be done on;
		fract.title = "mandelbrot";



	}
	else if (ac == 4 && (!(ft_strcmp("jullia", av[1]))))
	{
		fract.title = "Julia";
		fract_prep(&fract);

	}

}
