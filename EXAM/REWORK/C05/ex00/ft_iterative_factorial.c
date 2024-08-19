/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:55:53 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/15 19:25:49 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int n)
{
	int	result;
	int	i;

	if (n < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= n)
	{
		result = result * i;
		i++;
	}
	return (result);
}
