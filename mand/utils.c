/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:10 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/06 23:14:30 by obouftou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (s1[i] || s2[i])
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

void	ft_putchar_fd(int c, int fd)
{
	if (fd >= 0)
		write (fd, &c, 1);
}

void	ft_put_err(char *str, int fd)
{
	int	i;

	if (!str && fd < 0)
		return ;
	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}

void	param_init(int *s, int *non_true, int *f, int *digit)
{
	*s = 0;
	*non_true = 0;
	*f = 0;
	*digit = 0;
}

int	check_char(char c, int *s, int *f, int *digit)
{
	if ((c == '-' || c == '+'))
	{
		(*s)++;
		return (1);
	}
	if (c == '.')
	{
		(*f)++;
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		(*digit)++;
		return (1);
	}
	return (0);
}
