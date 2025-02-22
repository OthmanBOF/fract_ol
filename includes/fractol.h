/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:27:46 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/22 21:12:08 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>

typedef struct s_img_data
{
	void	*img_ptr;
}	t_img_data;

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
	t_img_data	img;
}	t_fractol;

int		ft_strcmp(char *s1, char *s2);
void	errno(char *str, t_fractol *f);

#endif
