/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:27:46 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/07 03:28:29 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <libc.h>

# define HEIGHT	900
# define WIDTH	900
# define MAX_ITER 100
# define BLACK 0X000000
# define ERROR1 "███████╗██████╗░██████╗░░█████╗░██████╗░\n"
# define ERROR2 "██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔══██╗\n"
# define ERROR3 "█████╗░░██████╔╝██████╔╝██║░░██║██████╔╝╗\n"
# define ERROR4 "██╔══╝░░██╔══██╗██╔══██╗██║░░██║██╔══██╗\n"
# define ERROR5 "███████╗██║░░██║██║░░██║╚█████╔╝██║░░██║\n"
# define ERROR6 "╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝░╚════╝░╚═╝░░╚═╝\n"

typedef struct s_check
{
	int	s;
	int	non_true;
	int	f;
	int	digit;
	int	prev;
}	t_check;

typedef struct s_nbr_cmplx
{
	double	real;
	double	img;
}		t_nbr_cmplx;

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
	int			iter_n;
	double		x_start;
	double		x_end;
	double		y_start;
	double		y_end;
	t_img_data	img;
	t_nbr_cmplx	z;
	t_nbr_cmplx	c_julia;
}	t_fractol;

int			ft_strcmp(char *s1, char *s2);
void		ft_put_err(char *str, int fd);
void		fract_prep(t_fractol *fractol);
int			parse_args(char *str);
void		plan(t_fractol *f);
void		fract_creat(t_fractol *f, char *str);
void		mandelbrot(t_fractol *f);
double		pix_cor_to_complexcor(double val, double min, \
										double max, double range);
t_nbr_cmplx	sum_complex(t_nbr_cmplx z, t_nbr_cmplx c);
void		color(t_fractol *f, int x, int y, int iter_n);
void		zoom_init(t_fractol *f);
void		put_pixel(t_fractol *f, int x, int y, int color);
void		julia(t_fractol *f);
t_nbr_cmplx	pow_comp2(t_nbr_cmplx z);
void		event_init(t_fractol *f);
double		ft_atod(char *str);
int			ft_isspace(char *str);
int			ft_nontrue(char *str);
int			check_char(char c, t_check *check);
void		param_init(t_check *check);

#endif
