/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:10 by obouftou          #+#    #+#             */
/*   Updated: 2025/03/06 18:14:57 by obouftou         ###   ########.fr       */
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

int	parse_args(char *str)
{
	int	i;
	int	s;
	int	non_true;
	int	f;
	int	digit;

	i = 0;
	param_init(&s, &non_true, &f, &digit);
	i = ft_isspace(str);
	--i;
	while (str[++i])
	{
		if ((str[i] == '-' || str[i] == '+') && i != 0)
			return (0);
		if (str[i] == '-' || str[i] == '+')
			s += 1;
		else if (str[i] == '.')
			f += 1;
		else if ((str[i] > '0' && str[i] < '9'))
			digit += 1;
		else
			break;
	}
	if (str[i - 1] == '.' || s > 1 || non_true > 0 || f > 1 || digit < 1)
		return (0);
	while (str[i])
	{
		if (str[i] != ' ')
			return 0 ;
		i++;
	}
	return (1);
}

// int	parse_args(char *str)
// {
// 	int	i = 0;
// 	int	s = 0, non_true = 0, f = 0, digit = 0;

// 	// Skip leading spaces
// 	while (str[i] == ' ')
// 		i++;

// 	// Ensure the string isn't just spaces
// 	if (str[i] == '\0')
// 		return (0);

// 	// Parse the number
// 	for (; str[i]; i++)
// 	{
// 		if ((str[i] == '-' || str[i] == '+') && i != 0)  // Sign must be at the start
// 			return (0);
// 		if (str[i] == '-' || str[i] == '+')
// 			s++;
// 		else if (str[i] == '.')
// 			f++;
// 		else if (str[i] >= '0' && str[i] <= '9')
// 			digit++;
// 		else if (str[i] != ' ')  // Reject anything that isn't a digit, sign, dot, or space
// 			non_true++;
// 		else
// 			break;  // Stop parsing if we hit a space (trailing spaces allowed)
// 	}

// 	// Ensure it's a valid float format
// 	if (s > 1 || f > 1 || non_true > 0 || digit < 1)
// 		return (0);

// 	// Ensure only spaces remain
// 	while (str[i])
// 	{
// 		if (str[i] != ' ')
// 			return (0);
// 		i++;
// 	}

// 	return (1);
// }

int	parse_args(char *str){
	//check for non numbers
	//skip spaces
	//check for .
	//check for signe
	//check for
	ft_nontrue(str);

}
