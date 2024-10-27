/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:50:18 by bkiskac           #+#    #+#             */
/*   Updated: 2024/08/18 17:50:21 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row(int x_index, int x, char corner, char edge)
{
	while (x_index <= x)
	{
		if (x_index == 1 || x_index == x)
			ft_putchar(corner);
		else
			ft_putchar(edge);
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
			ft_print_row(x_index, x, 'o', '-');
		}
		else if (y_index == y)
		{
			ft_print_row(x_index, x, 'o', '-');
		}
		else
		{
			ft_print_row(x_index, x, '|', ' ');
		}
		ft_putchar('\n');
		y_index++;
	}
}
