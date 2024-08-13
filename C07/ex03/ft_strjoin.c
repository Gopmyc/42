/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:02:13 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/13 19:18:35 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

int	ft_sep_strlen(char **strs, int size)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	return (total_length);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_str_join_main(char *array, int size, char *sep, char **strs)
{
	int	j;
	int	pos;

	j = 0;
	pos = 0;
	while (j < size)
	{
		ft_strcpy(&array[pos], strs[j]);
		pos += ft_strlen(strs[j]);
		if (j < size - 1)
		{
			ft_strcpy(&array[pos], sep);
			pos += ft_strlen(sep);
		}
		j++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		total_length;
	int		pos;

	if (size == 0)
		return ((char *)malloc(1));
	total_length = ft_sep_strlen(strs, size);
	total_length += ft_strlen(sep) * (size - 1);
	array = (char *)malloc((total_length + 1) * sizeof(char));
	if (!array)
		return (NULL);
	pos = ft_str_join_main(array, size, sep, strs);
	array[pos] = '\0';
	return (array);
}
