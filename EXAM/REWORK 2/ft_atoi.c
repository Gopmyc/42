/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:07:44 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/22 23:57:36 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;
	
	sign = 1;
	nb = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str <= '0' && *str >= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *test = "    		+";
	int test2 = ft_atoi(test);
	int test3 = atoi(test);
	printf("Le nombre est : %d\n", test2);
	printf("Le vrai atoi est : %d\n", test3);
	return (0);
}