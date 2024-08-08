/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:59:15 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/07 19:55:01 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combinations(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				write(1, (char[]){'0' + i, '0' + j, '0' + k, ',', ' '}, 5);
				if (!(i == 7 && j == 8 && k == 9))
					write(1, " ", 1);
				k++;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	print_combinations();
	return (0);
}
