/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:48:04 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/12 20:43:49 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nb^power --> nb*nb*nb*nb...[power *]
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	i = 0;
	result = 1;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
