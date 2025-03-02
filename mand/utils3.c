/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:10:55 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/02 22:46:55 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

t_nbr_cmplx	sum_complex(t_nbr_cmplx z, t_nbr_cmplx c)
{
	t_nbr_cmplx	res;

	res.img = z.img + c.img;
	res.real = z.real + c.real;
	return(res);
}

t_nbr_cmplx	pow_comp2 (t_nbr_cmplx z)
{
	double	tmp;

	tmp = (z.real * z.real) - (z.img * z.img);
	z.img = 2 * z.real * z.img;
	z.real = tmp;

	return (z);
}
