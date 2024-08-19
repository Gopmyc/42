/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:21:15 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/14 16:53:39 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*array;
	int	i;

	array = NULL;
	if (min >= max)
		return (array);
	length = min;
	while (length < max)
	{
		length++;
	}
	write(1, "a", sizeof(char));
	length = length - min;
	array = (int *)malloc(length * sizeof(int));
	i = 0;
	write(1, "b", sizeof(char));
	while (i < length)
	{
		array[i] = min;
		i++;
		min++;
	}
	write(1, "c", sizeof(char));
	return (array);
}
