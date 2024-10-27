/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:50:25 by bkiskac           #+#    #+#             */
/*   Updated: 2024/08/18 17:50:27 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_top_row(int x_index, int x)
{
	while (x_index <= x)
	{
		if (x_index == 1)
			ft_putchar('/');
		else if (x_index == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
		x_index++;
	}
}

void	ft_print_bottom_row(int x_index, int x)
{
	while (x_index <= x)
	{
		if (x_index == 1)
			ft_putchar('\\');
		else if (x_index == x)
			ft_putchar('/');
		else
			ft_putchar('*');
		x_index++;
	}
}

void	ft_print_mid_row(int x_index, int x)
{
	while (x_index <= x)
	{
		if (x_index == 1 || x_index == x)
			ft_putchar('*');
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
			ft_print_top_row(x_index, x);
		}
		else if (y_index == y)
		{
			ft_print_bottom_row(x_index, x);
		}
		else
		{
			ft_print_mid_row(x_index, x);
		}
		ft_putchar('\n');
		y_index++;
	}
}
