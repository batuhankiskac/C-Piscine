/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:21:03 by bkiskac           #+#    #+#             */
/*   Updated: 2024/08/26 17:31:06 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char const *argv[])
{
	int	i;
	int	j;

	i = argc;
	j = 0;
	while (i > 1)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			ft_putchar('\n');
			j++;
		}
		i--;
	}
	return (0);
}
