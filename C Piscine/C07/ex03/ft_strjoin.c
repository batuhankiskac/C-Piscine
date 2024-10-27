/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:20:26 by bkiskac           #+#    #+#             */
/*   Updated: 2024/09/01 12:50:24 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_compute_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		total_len += ft_strlen(sep);
		i++;
	}
	total_len -= ft_strlen(sep);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		a;
	char	*result;

	i = 0;
	a = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	result = (char *)malloc(ft_compute_total_len
			(size, strs, sep) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[a++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			result[a++] = sep[j++];
		i++;
	}
	result[a] = '\0';
	return (result);
}
