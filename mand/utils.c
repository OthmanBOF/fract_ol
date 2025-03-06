/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:10 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/06 21:59:01 by obouftou         ###   ########.fr       */
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

int	ft_nontrue(char *str)
{
	int	i;
	int	s;
	int	non_true;
	int	f;
	int	digit;
	param_init(&s, &non_true, &f, &digit);
	i = -1;
	while (str[++i])
	{
		if ((str[i] == '-' || str[i] == '+') && i != 0)
			return (0);
		if (str[i] == '-' || str[i] == '+')
			s++;
		else if (str[i] == '.')
			f++;
		else if (str[i] >= '0' && str[i] <= '9')
			digit++;
		else if (str[i] != ' ')
			non_true++;
		else
			break;
	}
	if (s > 1 || f > 1 || non_true > 0 || digit < 1)
		return (0);
	return (i);
}


int	parse_args(char *str)
{
	int	i;
	int	k;

	k = 0;
	k = ft_isspace(str);
	i = ft_nontrue((str + k));
	if (i == 0)
		return (0);
	while (str[i + k] == ' ')
		i++;
	if (str[i + k] != '\0')
		return (0);
	return (1);
}

