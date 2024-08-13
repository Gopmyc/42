/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:25:40 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/11 21:54:35 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;
	int	j;

	j = min;
	i = 0;
	size = (max - min);
	if (!(min >= max))
	{
		array = (int *)malloc((size + 1) * sizeof(int));
		while (i < size)
		{
			array[i] = j;
			i++;
			j++;
		}
	}
	else
	{
		array = NULL;
	}
	return (array);
}
