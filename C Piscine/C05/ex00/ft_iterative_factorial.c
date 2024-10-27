/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:42:20 by bkiskac           #+#    #+#             */
/*   Updated: 2024/08/26 11:12:47 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		res = res * (i + 1);
		i++;
	}
	return (res);
}
