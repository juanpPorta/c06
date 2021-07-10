/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:32:34 by jporta            #+#    #+#             */
/*   Updated: 2021/07/11 00:17:14 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = argc - 1;
	c = 0;
	if (argc > 1)
	{
		while (i > 0)
		{
			c = 0;
			while (argv[i][c] != '\0')
			{
				write(1, &argv[i][c], 1);
				c++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
