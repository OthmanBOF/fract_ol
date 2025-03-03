/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:10 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/03 17:16:19 by obouftou         ###   ########.fr       */
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
	exit(EXIT_FAILURE);
}

void	param_init(int *s, int *non_true, int *f, int *digit)
{
	*s = 0;
	*non_true = 0;
	*f = 0;
	*digit = 0;
}

int	parse_args(char *str)
{
	int	i;
	int	s;
	int	non_true;
	int	f;
	int	digit;

	i = -1;
	param_init(&s, &non_true, &f, &digit);
	while (str[++i])
	{
		if ((str[i] == '-' || str[i] == '+') && i != 0)
			return (0);
		if (str[i] == '-' || str[i] == '+')
			s += 1;
		else if (str[i] == '.')
			f += 1;
		else if (str[i] > '9' || str[i] < '0')
			non_true += 1;
		else
			digit++;
	}
	if (str[i - 1] == '.' || s > 1 || non_true > 0 || f > 1 || digit < 1)
		return (0);
	return (1);
}
