/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:19:47 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/11 21:54:39 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_array(const char *array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*array;
	int		i;

	i = 0;
	length = size_array(src);
	array = (char *)malloc((length + 1) * sizeof(int));
	while (i < length)
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
