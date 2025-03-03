/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:10:55 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/03 03:53:17 by obouftou         ###   ########.fr       */
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

double	ft_atod(char *str)
{
		int		i;
	int		sign;
	double	res;
	double	nbr_rational;

	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	if (str[i] == '.')
		i++;
	nbr_rational = 0.1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res += (str[i++] - '0') * nbr_rational;
		nbr_rational *= 0.1;
	}
	return (sign * res);
}

