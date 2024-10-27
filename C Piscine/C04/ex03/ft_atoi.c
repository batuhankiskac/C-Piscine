/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:27:24 by bkiskac           #+#    #+#             */
/*   Updated: 2024/08/25 17:08:04 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_whitespace(char *str)
{
	int	count;

	count = 0;
	while ((str[count] >= 9 && str[count] <= 13) || (str[count] == ' '))
		count++;
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = ft_whitespace(str);
	res = 0;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
