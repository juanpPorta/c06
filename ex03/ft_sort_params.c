/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:57:53 by jporta            #+#    #+#             */
/*   Updated: 2021/07/11 00:16:40 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ARTODE(char *REDUCIR, char *CODIGO)
{
	int		i;

	i = 0;
	while (REDUCIR[i])
	{
		if (REDUCIR[i] != CODIGO[i])
		{
			return (REDUCIR[i] - CODIGO[i]);
		}
		i++;
	}
	if (CODIGO[i] == '\0')
		return (0);
	else
		return (-CODIGO[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		c;
	char	*t;

	i = 0;
	while (++i < argc)
	{
		c = i;
		while (++c < argc)
		{
			if (ARTODE(argv[i], argv[c]) > 0)
			{
				t = argv[i];
				argv[i] = argv[c];
				argv[c] = t;
			}
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
