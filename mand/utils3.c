/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:10:55 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/28 18:13:48 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

t_fractol  sum_complex(t_nbr_cmplx z, t_nbr_cmplx c)
{
	t_nbr_cmplx	res;

	res.img = z.img + c.img;
	res.img = z.real + c.real;

	
}