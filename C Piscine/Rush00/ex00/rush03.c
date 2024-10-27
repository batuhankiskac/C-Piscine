/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:50:39 by bkiskac           #+#    #+#             */
/*   Updated: 2024/08/18 17:50:43 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row(int x_index, int x)
{
	while (x_index <= x)
	{
		if (x_index == 1)
			ft_putchar('A');
		else if (x_index == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		x_index++;
	}
}

void	ft_print_mid_row(int x_index, int x)
{
	while (x_index <= x)
	{
		if (x_index == 1 || x_index == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		x_index++;
	}
}

void	rush(int x, int y)
{
	int	x_index;
	int	y_index;

	if (x < 0 || y < 0)
		return ;
	x_index = 1;
	y_index = 1;
	while (y_index <= y)
	{
		if (y_index == 1)
		{
			ft_print_row(x_index, x);
		}
		else if (y_index == y)
		{
			ft_print_row(x_index, x);
		}
		else
		{
			ft_print_mid_row(x_index, x);
		}
		ft_putchar('\n');
		y_index++;
	}
}
