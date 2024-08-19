/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:06:16 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/18 16:18:06 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

/* Function involving math (sqrt and array_size) */
int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb <= 0)
		return (0);
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (x - 1);
}

/* Size calculation of matrix (--> array) */
int	array_size(char **str)
{
	int	nb;
	int	size;

	nb = 0;
	size = 0;
	while (str[1][nb])
	{
		if (str[1][nb] >= '0' && str[1][nb] <= '9')
			nb++;
		nb++;
	}
	size = ft_sqrt(nb);
	return (size);
}

int	ft_strlen(char *src)
{
	int	size;

	size = 0;
	while (src[size])
		size++;
	return (size);
}
