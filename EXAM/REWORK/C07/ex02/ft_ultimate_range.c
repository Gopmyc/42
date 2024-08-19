/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:54:04 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/14 17:13:07 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	if (min >= max)
	{
		*range = NULL;
		return (*range);
	}
	length = min;
	while (length < max)
		length++;
	*array = (int *)malloc(length * sizeof(int));
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;
	}
}

int	main(void)
{
	int	*array;
	int	**range;
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 5;
	max = 12;
	*array = ft_ultimate_range(**range, min, max);
	while (min < max)
	{
		write(1, &array[i], sizeof(int));
		i++;
		min++;
	}
	return (0);
}
