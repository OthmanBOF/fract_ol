/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:27:46 by obouftou          #+#    #+#             */
/*   Updated: 2025/02/23 22:22:01 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>

# define HEIGHT	900
# define WIDTH	900



typedef struct s_img_data
{
	void	*img_ptr;
	char	*pix_data;
	int		bit_pix;
	int		line_len;
	int		endian;
	int		color;
}	t_img_data;

typedef struct s_fractol
{
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
void	ft_put_err(char *str, int fd);
void	fract_prep(t_fractol *fractol);
int		parse_args(char *str);
void	plan(t_fractol *f);
void	fract_creat(t_fractol *f, char *str);

#endif
