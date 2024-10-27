/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:15:51 by bkiskac           #+#    #+#             */
/*   Updated: 2024/08/28 13:32:19 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (-1);
	*range = arr;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (size);
}
