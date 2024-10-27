/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:55:01 by bkiskac           #+#    #+#             */
/*   Updated: 2024/09/01 12:46:08 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*arr;

	i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	arr = (int *)malloc(range * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
