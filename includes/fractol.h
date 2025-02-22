/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:27:46 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/22 19:49:44 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <unistd.h>
# include <stdlib.h>
# include <math.h>

typedef struct s_fractol
{
	char		*name;
	double		zoom;
	void		*mlx_init_ptr;
	void		*mlx_win_ptr;
	char		*title;
	double		x_start;
	double		x_end;
	double		y_start;
	double		y_end;
}	t_fractol;

int	ft_strcmp(char *s1, char *s2);

#endif
