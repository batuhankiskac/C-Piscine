/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:29:34 by bkiskac           #+#    #+#             */
/*   Updated: 2024/08/26 14:16:55 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div_count;
	int	i;

	div_count = 0;
	i = 1;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			div_count++;
		if (div_count > 2)
			break ;
		i++;
	}
	if (div_count == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = nb;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(prime) != 1)
	{
		prime++;
	}
	return (prime);
}
